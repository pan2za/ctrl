import argparse
import logging

from neutronclient.neutron.v2_0 import CreateCommand
from neutronclient.neutron.v2_0 import DeleteCommand
from neutronclient.neutron.v2_0 import ListCommand
from neutronclient.neutron.v2_0 import UpdateCommand
from neutronclient.neutron.v2_0 import ShowCommand


class ListPolicy(ListCommand):
    """List Network Policy information that belong to a given tenant."""

    resource = 'policy'
    log = logging.getLogger(__name__ + '.ListPolicy')
    _formatters = {}
    list_columns = ['id', 'name']


class ShowPolicy(ShowCommand):
    """Show information of a given Policy."""

    resource = 'policy'
    log = logging.getLogger(__name__ + '.ShowPolicy')


class CreatePolicy(CreateCommand):
    """Create an Policy for a given tenant."""

    resource = 'policy'
    log = logging.getLogger(__name__ + '.CreatePolicy')

    def add_known_arguments(self, parser):
        parser.add_argument(
            '--method',
            default='fixed',
            help='Set Network Policy parameters')
        parser.add_argument(
            'name', metavar='name',
            help='Name of Policy to create')

    def args2body(self, parsed_args):
        body = {'policy': {
            'name': parsed_args.name, }, }
        if parsed_args.tenant_id:
            body['policy'].update({'tenant_id': parsed_args.tenant_id})
        return body


class DeletePolicy(DeleteCommand):
    """Delete a given Policy."""

    log = logging.getLogger(__name__ + '.DeletePolicy')
    resource = 'policy'


class UpdatePolicy(UpdateCommand):
    """Update Policy's information."""

    log = logging.getLogger(__name__ + '.UpdatePolicy')
    resource = 'policy'
