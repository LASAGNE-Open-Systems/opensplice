/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the ADLINK Software License Agreement Rev 2.7 2nd October
 *   2014 (the "License"); you may not use this file except in compliance with
 *   the License.
 *   You may obtain a copy of the License at:
 *                      $OSPL_HOME/LICENSE
 *
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef OS_INTEGRITY_SOCKET_H
#define OS_INTEGRITY_SOCKET_H

#if defined (__cplusplus)
extern "C" {
#endif

#include <sys/socket.h>
#include <net/if.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <unistd.h>

/* Keep defines before common header */
#define OS_NO_SIOCGIFINDEX
#define OS_NO_NETLINK
#define OS_IFNAMESIZE		IF_NAMESIZE
#define OS_SOCKET_HAS_SA_LEN	1
#define OS_SOCKET_HAS_IPV6      1
#define OS_NO_GETIFADDRS
#define OS_NO_SIOCGLIFCONF
#include "../common/include/os_socket.h"

#if defined (__cplusplus)
}
#endif

#endif /* OS_INTEGRITY_SOCKET_H */
