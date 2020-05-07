﻿/*
** Anxiu Li, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TEXT_APP_H__
#define __TEXT_APP_H__
////////////////////////////////////////////////////////////////////////////////

#include "TextPart.h"
#include "ReplacePart.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextApp

class TextApp
{
public:
	TextApp();
	TextApp(const TextApp&) = delete;
	TextApp& operator=(const TextApp&) = delete;
	~TextApp() noexcept;

//methods
	bool Init();
	int Run();

private:
	std::function<bool()> get_ReplaceCommand();

private:
	TextPart  m_textPart;
	std::unique_ptr<ReplacePart>  m_upReplacePart;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////