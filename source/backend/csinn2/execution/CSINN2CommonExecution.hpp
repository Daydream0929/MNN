//
//  CSINN2Backend.hpp
//  MNN
//
//  Created by fengzhenjun on 2024/07/22
//

#ifndef CSINN2CommonExecution_hpp
#define CSINN2CommonExecution_hpp
#include "CSINN2Backend.hpp"
#include "core/Execution.hpp"

using namespace std;
namespace MNN {

class CSINN2CommonExecution : public Execution {
public:
    CSINN2CommonExecution(Backend *backend, const Op *op);
    virtual ~CSINN2CommonExecution() = default;

    virtual ErrorCode onResize(const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs) override;
    virtual ErrorCode onExecute(const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs) override;

    NPUBackend* mNpuBackend;
    const Op* mOp;
};

} // namespace MNN
#endif /* CSINN2CommonExecution_hpp */
