uint8_t trpc_get_default_power_idx(uint8_t formatmod, uint8_t mcs);
uint8_t trpc_get_power_idx(uint8_t formatmod, uint8_t mcs, int8_t pwr_dbm);
int8_t trpc_get_rf_max_power(void);
int8_t trpc_get_rf_min_power(void);
void trpc_power_get(int8_t * power_rate_table);
void trpc_update_power(int8_t[8] * power_rate_table);
void trpc_update_power_11b(int8_t * power_rate_table);
void trpc_update_power_11g(int8_t * power_rate_table);
void trpc_update_power_11n(int8_t * power_rate_table);
void trpc_update_vs_channel(int8_t channel_MHz);
void trpc_update_vs_temperature(int8_t temperature);