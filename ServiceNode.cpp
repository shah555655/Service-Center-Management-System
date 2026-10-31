#include "ServiceNode.h"

ServiceNode::ServiceNode(int id, string name, string type) {
    serviceID = id;
    customerName = name;
    serviceType = type;
    left = nullptr;
    right = nullptr;
}