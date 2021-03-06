//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// startup.h
//
// Identification: src/include/parser/postmaster/startup.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * startup.h
 *	  Exports from postmaster/startup.c.
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 *
 * src/include/postmaster/startup.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef _STARTUP_H
#define _STARTUP_H

extern void HandleStartupProcInterrupts(void);
// TODO: Peloton Changes
extern void StartupProcessMain(void);
extern void PreRestoreCommand(void);
extern void PostRestoreCommand(void);
extern bool IsPromoteTriggered(void);
extern void ResetPromoteTriggered(void);

#endif   /* _STARTUP_H */
