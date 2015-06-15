#ifndef RNDC_H
#define RNDC_H 1

#ifdef __cplusplus
extern "C" {
#endif
struct rndc_params {
    const char *domain_name;
    const char *view_name;
    const char *zone_filename;
    const char *forwarder_ip;
    int8_t allow_update;
};
extern void rndc_add_zone(struct rndc_params *params);
extern void rndc_del_zone(const char *zone, const char *view);
extern void rndc_reconfig(void);

#ifdef __cplusplus
}
#endif
#endif /* RNDC_H */
