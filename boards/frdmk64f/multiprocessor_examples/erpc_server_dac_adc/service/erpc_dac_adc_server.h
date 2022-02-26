/*
 * Copyright (c) 2014-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Generated by erpcgen 1.9.0 on Thu Sep 23 10:39:09 2021.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_dac_adc_server_h_)
#define _erpc_dac_adc_server_h_

#ifdef __cplusplus
#include "erpc_server.h"
#include "erpc_codec.h"
extern "C"
{
#include "erpc_dac_adc.h"
#include <stdint.h>
#include <stdbool.h>
}

#if 10900 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif


/*!
 * @brief Service subclass for dac_adc.
 */
class dac_adc_service : public erpc::Service
{
public:
    dac_adc_service() : Service(kdac_adc_service_id) {}

    /*! @brief Call the correct server shim based on method unique ID. */
    virtual erpc_status_t handleInvocation(uint32_t methodId, uint32_t sequence, erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory);

private:
    /*! @brief Server shim for adc_get_config of dac_adc interface. */
    erpc_status_t adc_get_config_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for convert_dac_adc of dac_adc interface. */
    erpc_status_t convert_dac_adc_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for set_led of dac_adc interface. */
    erpc_status_t set_led_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for read_senzor_mag_accel of dac_adc interface. */
    erpc_status_t read_senzor_mag_accel_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for board_get_name of dac_adc interface. */
    erpc_status_t board_get_name_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);
};

extern "C" {
#else
#include "erpc_dac_adc.h"
#endif // __cplusplus

typedef void * erpc_service_t;

erpc_service_t create_dac_adc_service(void);

#if ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_DYNAMIC
void destroy_dac_adc_service(erpc_service_t *service);
#elif ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_STATIC
void destroy_dac_adc_service(void);
#else
#warning "Unknown eRPC allocation policy!"
#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _erpc_dac_adc_server_h_
