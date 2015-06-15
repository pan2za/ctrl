# Copyright 2012 OpenStack LLC.
# All Rights Reserved
#
#    Licensed under the Apache License, Version 2.0 (the "License"); you may
#    not use this file except in compliance with the License. You may obtain
#    a copy of the License at
#
#         http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
#    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
#    License for the specific language governing permissions and limitations
#    under the License.
#
# vim: tabstop=4 shiftwidth=4 softtabstop=4

import argparse
import logging

from neutronclient.neutron import v2_0 as neutronv20


class ListRouteTable(neutronv20.ListCommand):
    """List route tables that belong to a given tenant."""

    resource = 'route_table'
    log = logging.getLogger(__name__ + '.ListRouteTable')
    list_columns = ['id', 'name', 'description']
    pagination_support = True
    sorting_support = True


class ShowRouteTable(neutronv20.ShowCommand):
    """Show information of a given route table."""

    resource = 'route_table'
    log = logging.getLogger(__name__ + '.ShowRouteTable')
    allow_names = True


class CreateRouteTable(neutronv20.CreateCommand):
    """Create a route table."""

    resource = 'route_table'
    log = logging.getLogger(__name__ + '.CreateRouteTable')

    def add_known_arguments(self, parser):
        parser.add_argument(
            'name', metavar='NAME',
            help='Name of route table to create')

    def args2body(self, parsed_args):
        body = {'route_table': {
            'name': parsed_args.name}}
        if parsed_args.tenant_id:
            body['route_table'].update({'tenant_id': parsed_args.tenant_id})
        return body


class DeleteRouteTable(neutronv20.DeleteCommand):
    """Delete a given route table."""

    log = logging.getLogger(__name__ + '.DeleteRouteTable')
    resource = 'route_table'
    allow_names = True


class ListNatInstance(neutronv20.ListCommand):
    """List nat instances that belong to a given tenant."""

    resource = 'nat_instance'
    log = logging.getLogger(__name__ + '.ListNatInstance')
    list_columns = ['id', 'name', 'internal_net', 'external_net']
    pagination_support = True
    sorting_support = True


class ShowNatInstance(neutronv20.ShowCommand):
    """Show information of a given nat instance."""

    resource = 'nat_instance'
    log = logging.getLogger(__name__ + '.ShowNatInstance')
    allow_names = True


class CreateNatInstance(neutronv20.CreateCommand):
    """Create a nat instance."""

    resource = 'nat_instance'
    log = logging.getLogger(__name__ + '.CreateNatInstance')

    def add_known_arguments(self, parser):
        parser.add_argument(
            'name', metavar='NAME',
            help='Name of nat instance to create')
        parser.add_argument(
            'internal_net', metavar='NETWORK',
            help='Internal network id ')
        parser.add_argument(
            'external_net', metavar='NETWORK',
            help='External network id ')

    def args2body(self, parsed_args):
        body = {'nat_instance': {
            'name': parsed_args.name}}
        if parsed_args.tenant_id:
            body['nat_instance'].update({'tenant_id': parsed_args.tenant_id})
        if parsed_args.internal_net:
            body['nat_instance'].update({
                    'internal_net': parsed_args.internal_net})
        if parsed_args.external_net:
            body['nat_instance'].update({
                    'external_net': parsed_args.external_net})
        return body


class DeleteNatInstance(neutronv20.DeleteCommand):
    """Delete a given nat instance."""

    log = logging.getLogger(__name__ + '.DeleteNatInstance')
    resource = 'nat_instance'
    allow_names = True
