#include <string>

#include "EmptyContainer.h"

EmptyContainer::EmptyContainer(std::string error)
    :std::domain_error(error){
}

EmptyContainer::EmptyContainer(const EmptyContainer& orig)
    :std::domain_error(orig) {
}

EmptyContainer::~EmptyContainer() noexcept {
}

