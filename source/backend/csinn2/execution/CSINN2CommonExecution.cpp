//
//  CSINN2Backend.hpp
//  MNN
//
//  Created by fengzhenjun on 2024/07/22
//

#include "CSINN2CommonExecution.hpp"
namespace MNN {

CSINN2CommonExecution::CSINN2CommonExecution(Backend *backend, const Op *op) : Execution(backend), mOp(op) {
    mCSINN2Backend = (CSINN2Backend *)backend;
}

ErrorCode CSINN2CommonExecution::onResize(const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs) {
    return NO_ERROR;
}

ErrorCode CSINN2CommonExecution::onExecute(const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs) {
    return NO_ERROR;
}

}; // namespace MNN
