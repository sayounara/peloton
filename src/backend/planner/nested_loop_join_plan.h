//===----------------------------------------------------------------------===//
//
//                         PelotonDB
//
// nested_loop_join_node.h
//
// Identification: src/backend/planner/nested_loop_join_node.h
//
// Copyright (c) 2015, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include <memory>
#include <string>
#include <vector>

#include "abstract_join_plan.h"
#include "backend/common/types.h"
#include "backend/expression/abstract_expression.h"
#include "backend/planner/project_info.h"

namespace peloton {
namespace planner {

class NestedLoopJoinPlan : public AbstractJoinPlan {
 public:
  NestedLoopJoinPlan(const NestedLoopJoinPlan &) = delete;
  NestedLoopJoinPlan &operator=(const NestedLoopJoinPlan &) = delete;
  NestedLoopJoinPlan(NestedLoopJoinPlan &&) = delete;
  NestedLoopJoinPlan &operator=(NestedLoopJoinPlan &&) = delete;

<<<<<<< HEAD:src/backend/planner/nested_loop_join_plan.h
  NestedLoopJoinPlan(expression::AbstractExpression *predicate,
=======
  NestedLoopJoinNode(const expression::AbstractExpression *predicate,
>>>>>>> bridge:src/backend/planner/nested_loop_join_node.h
                     const ProjectInfo *proj_info)
      : AbstractJoinPlan(JOIN_TYPE_INVALID, predicate,
                             proj_info) {  // FIXME
    // Nothing to see here...
  }

  inline PlanNodeType GetPlanNodeType() const {
    return PLAN_NODE_TYPE_NESTLOOP;
  }

  inline std::string GetInfo() const { return "NestedLoopJoin"; }

 private:
  // There is nothing special that we need here
};

}  // namespace planner
}  // namespace peloton
