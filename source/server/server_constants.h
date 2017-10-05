#ifndef _SERVER_CONSTANTS_H_
#define _SERVER_CONSTANTS_H_

#include <cstddef>
namespace server_constants
{
// Configuration file
static const char* CONFIGURATION_FILE = "ome.ini";
// Configuration - General process related
static const char* CONFIGURATION_FILE_SINGLE_INSTANCE_TCP_PORT = "SINGLE_INSTANCE_TCP_PORT";
static const char* CONFIGURATION_FILE_OFFLINE_ORDER_ENTRY_FILE = "OFFLINE_ORDER_ENTRY_FILE";
static const char* CONFIGURATION_FILE_PROCESS_PRIORITY = "PROCESS_PRIORITY";
static const char* CONFIGURATION_FILE_LOGGER_BUFFER_SIZE = "LOGGER_BUFFER_SIZE";
// Configuration - Central order book related
static const char* CONFIGURATION_FILE_CENTRAL_ORDER_BOOK_MULTITHREADED_ORDER_MATCHING = "CENTRAL_ORDER_BOOK_MULTITHREADED_ORDER_MATCHING";
static const char* CONFIGURATION_FILE_CENTRAL_ORDER_BOOK_PIN_THREADS_TO_CORES = "CENTRAL_ORDER_BOOK_PIN_THREADS_TO_CORES";
static const char* CONFIGURATION_FILE_CENTRAL_ORDER_BOOK_WORK_QUEUE_SIZE_PER_THREAD = "CENTRAL_ORDER_BOOK_WORK_QUEUE_SIZE_PER_THREAD";
static const char* CONFIGURATION_FILE_CENTRAL_ORDER_BOOK_THREAD_STACK_SIZE = "CENTRAL_ORDER_BOOK_THREAD_STACK_SIZE";
static const char* CONFIGURATION_FILE_CENTRAL_ORDER_BOOK_THREAD_PRIORITY = "CENTRAL_ORDER_BOOK_THREAD_PRIORITY";
static const char* CONFIGURATION_FILE_CENTRAL_ORDER_BOOK_HYPER_THREADING = "CENTRAL_ORDER_BOOK_HYPER_THREADING";
static const char* CONFIGURATION_FILE_SYMBOL_ARRAY = "SYMBOL";
// Configuration Defaults
static const int    CONFIFURATION_DEFAULT_SINGLE_INSTANCE_TCP_PORT = 666;
static const char*    CONFIGURATION_DEFAULT_PROCESS_PRIORITY = "NORMAL";
static bool            CONFIGURATION_DEFAULT_CENTRAL_ORDER_BOOK_MULTITHREADED_ORDER_MATCHING_ENGINE = true;
static bool            CONFIGURATION_DEFAULT_CENTRAL_ORDER_BOOK_PIN_THREADS_TO_CORES = true;
static bool            CONFIGURATION_DEFAULT_CENTRAL_ORDER_BOOK_HYPER_THREADING = true;
static int            CONFIGURATION_DEFAULT_CENTRAL_ORDER_BOOK_WORK_QUEUE_SIZE_PER_THREAD = 8192;
static const char*    CONFIGURATION_DEFAULT_CENTRAL_ORDER_BOOK_THREAD_PRIORITY = "NORMAL";
static int            CONFIGURATION_DEFAULT_CENTRAL_ORDER_BOOK_THREAD_STACK_SIZE = 0;
static int            CONFIGURATION_DEFAULT_LOGGER_BUFFER_SIZE = 8192;
static bool            CONFIGURATION_DEFAULT_LOGGER_FILE_SINK = true;
static const char*    CONFIGURATION_DEFAULT_CENTRAL_LOGGER_FILE_SINK_RESOURCE_NAME = "ome_log.txt";
static bool            CONFIGURATION_DEFAULT_LOGGER_CONSOLE_SINK = true;
// Fix engine related
static const char* FIX_ENGINE_CONFIG_FILE = "quickfix_server.cfg";
static const char* FIX_ENGINE_LOG_DIRECTORY = "quickfix_log";
// Offline order entry mode related
static const char*    OFFLINE_ORDER_ENTRY_RESULTS_FILE = "offline_order_entry_results.txt";
static const char*    OFFLINE_ORDER_ENTRY_NEW_ORDER = "NEW_ORDER";
static const char*    OFFLINE_ORDER_ENTRY_SELL = "SELL";
// Others
static const std::size_t SERVER_THREAD_SLEEP_DURATION_MICROSECONDS = 1000;

}

#endif