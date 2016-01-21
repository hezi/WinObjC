/*-
 * Copyright (c) 2002 Mike Barcroft <mike@FreeBSD.org>
 * All rights reserved.
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
 *
 * $FreeBSD$
 */

#ifndef _SYS__TIMEVAL_H_
#define _SYS__TIMEVAL_H_

#include <sys/_types.h>

#ifndef _SUSECONDS_T_DECLARED
typedef __suseconds_t suseconds_t;
#define _SUSECONDS_T_DECLARED
#endif

#if 0 //  LIMBO
#ifndef _TIME_T_DECLARED
typedef __time_t    time_t;
#define _TIME_T_DECLARED
#endif
#endif

/*
 * Structure returned by gettimeofday(2) system call, and used in other calls.
 */
#ifndef _WINSOCK2API_ // HACKAHCK: symbol also in winsock2.h so guard against it a bit.

#ifndef WIN32
#define __SHOULD_UNDEF_WIN32
#endif

#include <Winsock2.h>
#undef far
#undef near
#undef FAR
#undef NEAR
#define FAR
#define NEAR

#ifdef __SHOULD_UNDEF_WIN32
#undef __SHOULD_UNDEF_WIN32
#undef WIN32
#endif

#endif

#endif /* !_SYS__TIMEVAL_H_ */
