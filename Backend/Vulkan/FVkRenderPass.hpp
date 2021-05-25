#pragma once

#include "../Core/FlyRenderPass.hpp"

namespace FlyEngine::Backend
{
class FVkRenderPass : public FlyRenderPass
{
public:
    FVkRenderPass(FlyDevice *fVkDevice) : FlyRenderPass(fVkDevice) {}
    ~FVkRenderPass() {}
    
    virtual void Destroy() override;
    virtual void Initialize(const RenderPassInfo &info) override;
};

} // namespace FlyEngine::Backend