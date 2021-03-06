/*
 * Copyright (c) 2017 embedded brains GmbH.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Dornierstr. 4
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef LIBBSDHELPER_H
#define LIBBSDHELPER_H

#include <rtems.h>
#include <rtems/shell.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void	libbsdhelper_init_libbsd(void);
void	libbsdhelper_init_sd_card(rtems_task_priority prio);
void	libbsdhelper_lower_self_prio(rtems_task_priority prio);
rtems_status_code libbsdhelper_wait_for_sd(void);
void	libbsdhelper_init_wpa_supplicant(const char *conf_file,
	    rtems_task_priority prio);
void	libbsdhelper_init_dhcpcd(rtems_task_priority prio);
void	libbsdhelper_create_wlandev(char *dev);
void	libbsdhelper_start_shell(rtems_task_priority prio);

extern rtems_shell_cmd_t rtems_shell_STARTFTP_Command;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBBSDHELPER_H */
