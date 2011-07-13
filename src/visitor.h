
//
// visitor.h
//
// Copyright (c) 2011 TJ Holowaychuk <tj@vision-media.ca>
//

#ifndef __LUNA_VISITOR__
#define __LUNA_VISITOR__

#include "ast.h"

/*
 * Visitor struct.
 */

typedef struct luna_visitor {
  void (* visit_block)(luna_block_node_t *node, struct luna_visitor *self);
  void (* visit_id)(luna_id_node_t *node, struct luna_visitor *self);
  void (* visit_int)(luna_int_node_t *node, struct luna_visitor *self);
  void (* visit_float)(luna_float_node_t *node, struct luna_visitor *self);
  void (* visit_string)(luna_string_node_t *node, struct luna_visitor *self);
  void (* visit_slot)(luna_slot_node_t *node, struct luna_visitor *self);
  void (* visit_call)(luna_call_node_t *node, struct luna_visitor *self);
  void (* visit_while)(luna_while_node_t *node, struct luna_visitor *self);
  void (* visit_unary_op)(luna_unary_op_node_t *node, struct luna_visitor *self);
  void (* visit_binary_op)(luna_binary_op_node_t *node, struct luna_visitor *self);
  void (* visit_function)(luna_function_node_t *node, struct luna_visitor *self);
  void (* visit_if)(luna_if_node_t *node, struct luna_visitor *self);
} luna_visitor_t;

void
luna_visit(luna_visitor_t *self, luna_node_t *node);

#endif /* __LUNA_VISITOR__ */