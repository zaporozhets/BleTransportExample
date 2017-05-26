//
// btstack_config.h for WICED port
//

#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

// Port related features
#define HAVE_EMBEDDED_TIME_MS
#define WICED_BT_UART_MANUAL_CTS_RTS
#define HAVE_AES128

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_CLASSIC
#define ENABLE_LE_PERIPHERAL
#define ENABLE_LE_CENTRAL
#define ENABLE_LE_SECURE_CONNECTIONS
#define ENABLE_LOG_ERROR
#define ENABLE_LOG_INFO
// #define ENABLE_LOG_DEBUG

// BTstack configuration. buffers, sizes, ...
#define HCI_ACL_PAYLOAD_SIZE 100
#define MAX_SPP_CONNECTIONS 1
#define MAX_NR_GATT_CLIENTS 1
#define MAX_NR_HCI_CONNECTIONS MAX_SPP_CONNECTIONS
#define MAX_NR_L2CAP_SERVICES  2
#define MAX_NR_L2CAP_CHANNELS  (1+MAX_SPP_CONNECTIONS)
#define MAX_NR_RFCOMM_MULTIPLEXERS MAX_SPP_CONNECTIONS
#define MAX_NR_RFCOMM_SERVICES 1
#define MAX_NR_RFCOMM_CHANNELS MAX_SPP_CONNECTIONS
#define MAX_NR_BTSTACK_LINK_KEY_DB_MEMORY_ENTRIES 2
#define MAX_NR_BNEP_SERVICES 0
#define MAX_NR_BNEP_CHANNELS 0
#define MAX_NR_HFP_CONNECTIONS 0
#define MAX_NR_WHITELIST_ENTRIES 1
#define MAX_NR_SM_LOOKUP_ENTRIES 3
#define MAX_NR_SERVICE_RECORD_ITEMS 1
#define MAX_NR_LE_DEVICE_DB_ENTRIES 1

// WICED DCT used to store:
// - Num Classic Link Keys
#define NVM_NUM_LINK_KEYS 10
// - Num LE Device entries
#define NVM_NUM_LE_DEVICES 10

#endif