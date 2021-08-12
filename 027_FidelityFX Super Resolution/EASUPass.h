#pragma once
#include "RenderPass.h"
#include <vector>
#include <GLM/glm.hpp>
#include <GL/glew.h>

class CEASUPass : public IRenderPass
{
public:
	CEASUPass(const std::string& vPassName, int vExcutionOrder);
	virtual ~CEASUPass();

	virtual void initV() override;
	virtual void updateV() override;

private:
	std::vector<int> m_GlobalGroupSize;
	int m_DisplayWidth;
	int m_DisplayHeight;

	int m_RenderWidth;
	int m_RenderHeight;
};