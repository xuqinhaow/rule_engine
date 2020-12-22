#ifndef _RULE_ENGINE_RULE_ENTRY_
#define _RULE_ENGINE_RULE_ENTRY_

#include <string>

#include "node.hpp"
#include "if_scope.hpp"
#include "then_scope.hpp"

namespace rule_engine {

class RuleEntry: public Node {
private:
    std::string name_;
    std::string description_;
    int salience_;

    std::shared_ptr<IfScope> if_scope_;
    std::shared_ptr<ThenScope> then_scope_;
};

}

#endif