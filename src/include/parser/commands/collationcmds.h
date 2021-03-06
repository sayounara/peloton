//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// collationcmds.h
//
// Identification: src/include/parser/commands/collationcmds.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * collationcmds.h
 *	  prototypes for collationcmds.c.
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/collationcmds.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef COLLATIONCMDS_H
#define COLLATIONCMDS_H

#include "parser/catalog/objectaddress.h"
#include "parser/nodes/parsenodes.h"

extern ObjectAddress DefineCollation(List *names, List *parameters);
extern void IsThereCollationInNamespace(const char *collname, Oid nspOid);

#endif   /* COLLATIONCMDS_H */
