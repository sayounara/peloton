//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// resowner_private.h
//
// Identification: src/include/parser/utils/resowner_private.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * resowner_private.h
 *	  POSTGRES resource owner private___ definitions.
 *
 * See utils/resowner/README for more info.
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/utils/resowner_private.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef RESOWNER_PRIVATE_H
#define RESOWNER_PRIVATE_H

#include "parser/storage/dsm.h"
#include "parser/storage/fd.h"
#include "parser/storage/lock.h"
#include "parser/utils/catcache.h"
#include "parser/utils/plancache.h"
#include "parser/utils/resowner.h"
#include "parser/utils/snapshot.h"


/* support for buffer refcount management */
extern void ResourceOwnerEnlargeBuffers(ResourceOwner owner);
extern void ResourceOwnerRememberBuffer(ResourceOwner owner, Buffer buffer);
extern void ResourceOwnerForgetBuffer(ResourceOwner owner, Buffer buffer);

/* support for local lock management */
extern void ResourceOwnerRememberLock(ResourceOwner owner, LOCALLOCK *locallock);
extern void ResourceOwnerForgetLock(ResourceOwner owner, LOCALLOCK *locallock);

/* support for catcache refcount management */
extern void ResourceOwnerEnlargeCatCacheRefs(ResourceOwner owner);
extern void ResourceOwnerRememberCatCacheRef(ResourceOwner owner,
								 HeapTuple tuple);
extern void ResourceOwnerForgetCatCacheRef(ResourceOwner owner,
							   HeapTuple tuple);
extern void ResourceOwnerEnlargeCatCacheListRefs(ResourceOwner owner);
extern void ResourceOwnerRememberCatCacheListRef(ResourceOwner owner,
									 CatCList *list);
extern void ResourceOwnerForgetCatCacheListRef(ResourceOwner owner,
								   CatCList *list);

/* support for relcache refcount management */
extern void ResourceOwnerEnlargeRelationRefs(ResourceOwner owner);
extern void ResourceOwnerRememberRelationRef(ResourceOwner owner,
								 Relation rel);
extern void ResourceOwnerForgetRelationRef(ResourceOwner owner,
							   Relation rel);

/* support for plancache refcount management */
extern void ResourceOwnerEnlargePlanCacheRefs(ResourceOwner owner);
extern void ResourceOwnerRememberPlanCacheRef(ResourceOwner owner,
								  CachedPlan *plan);
extern void ResourceOwnerForgetPlanCacheRef(ResourceOwner owner,
								CachedPlan *plan);

/* support for tupledesc refcount management */
extern void ResourceOwnerEnlargeTupleDescs(ResourceOwner owner);
extern void ResourceOwnerRememberTupleDesc(ResourceOwner owner,
							   TupleDesc tupdesc);
extern void ResourceOwnerForgetTupleDesc(ResourceOwner owner,
							 TupleDesc tupdesc);

/* support for snapshot refcount management */
extern void ResourceOwnerEnlargeSnapshots(ResourceOwner owner);
extern void ResourceOwnerRememberSnapshot(ResourceOwner owner,
							  Snapshot snapshot);
extern void ResourceOwnerForgetSnapshot(ResourceOwner owner,
							Snapshot snapshot);

/* support for temporary file management */
extern void ResourceOwnerEnlargeFiles(ResourceOwner owner);
extern void ResourceOwnerRememberFile(ResourceOwner owner,
						  File file);
extern void ResourceOwnerForgetFile(ResourceOwner owner,
						File file);

/* support for dynamic shared memory management */
extern void ResourceOwnerEnlargeDSMs(ResourceOwner owner);
extern void ResourceOwnerRememberDSM(ResourceOwner owner,
						 dsm_segment *);
extern void ResourceOwnerForgetDSM(ResourceOwner owner,
					   dsm_segment *);

#endif   /* RESOWNER_PRIVATE_H */
