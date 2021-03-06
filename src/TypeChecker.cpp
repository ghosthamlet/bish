#include <iostream>
#include <cassert>
#include "IR.h"
#include "TypeChecker.h"

using namespace Bish;

// void IRNodeSymbolTable::insert(const IRNode *n, Type ty) {
//     table[n] = new SymbolTableEntry(ty);
// }

// SymbolTableEntry *IRNodeSymbolTable::lookup(const IRNode *n) const {
//     std::map<const IRNode *, SymbolTableEntry *>::const_iterator I = table.find(n);
//     if (I == table.end()) {
//         return NULL;
//     }
//     return I->second;
// }

// void TypeChecker::visit(const Block *node) {
//     SymbolTable *old_symtab = current_symtab;
//     IRNodeSymbolTable *old_ast_symtab = current_astnode_symtab;
//     current_symtab = node->symbol_table;
//     current_astnode_symtab = new IRNodeSymbolTable();
//     for (std::vector<IRNode *>::const_iterator I = node->nodes.begin(),
//              E = node->nodes.end(); I != E; ++I) {
//         (*I)->accept(this);
//     }
//     delete current_astnode_symtab;
//     current_symtab = old_symtab;
//     current_astnode_symtab = old_ast_symtab;
// }

// void TypeChecker::visit(const Assignment *node) {
//     node->variable->accept(this);
//     node->value->accept(this);

//     SymbolTableEntry *evar = lookup(node->variable, false);
//     SymbolTableEntry *eval = lookup(node->value);
//     assert(eval);
//     if (evar) {
//         assert(evar->type == eval->type);
//     } else {
//         current_symtab->insert(node->variable->name, eval->type);
//     }
// }

// void TypeChecker::visit(const IfStatement *node) {
//     // XXX: ensure condition is boolean
//     node->condition->accept(this);
//     node->body->accept(this);
// }

// void TypeChecker::visit(const BinOp *node) {
//     node->a->accept(this);
//     node->b->accept(this);

//     SymbolTableEntry *ea = lookup(node->a);
//     SymbolTableEntry *eb = lookup(node->b);
//     assert(ea && eb);
//     assert(ea->type == eb->type && "Type mismatch to binary operator.");
//     current_astnode_symtab->insert(node, ea->type);
// }

// void TypeChecker::visit(const UnaryOp *node) {
//     node->a->accept(this);
//     SymbolTableEntry *e = lookup(node->a);
//     assert(e);
//     current_astnode_symtab->insert(node, e->type);
// }

// void TypeChecker::visit(const Integer *node) {
//     current_astnode_symtab->insert(node, IntegerTy);
// }

// void TypeChecker::visit(const Fractional *node) {
//     current_astnode_symtab->insert(node, FractionalTy);
// }

// void TypeChecker::visit(const String *node) {
//     current_astnode_symtab->insert(node, StringTy);
// }

// void TypeChecker::visit(const Boolean *node) {
//     current_astnode_symtab->insert(node, BooleanTy);
// }

// SymbolTableEntry *TypeChecker::lookup(const IRNode *n, bool assert_non_null) {
//     SymbolTableEntry *e = NULL;
//     if (const Variable *v = dynamic_cast<const Variable*>(n)) {
//         e = current_symtab->lookup(v->name);
//         if (assert_non_null && e == NULL) {
//             std::cerr << "Unknown symbol '" << v->name << "'\n";
//             assert(false);
//         }
//     } else {
//         e = current_astnode_symtab->lookup(n);
//     }
//     return e;
// }
