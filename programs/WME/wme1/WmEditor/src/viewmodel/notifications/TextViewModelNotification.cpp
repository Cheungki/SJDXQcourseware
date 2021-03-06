﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../../common/TextDef.h"
#include "../../model/TextModel.h"
#include "../TextViewModel.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextViewModel

PropertyNotification TextViewModel::get_notification()
{
	return [this](uint32_t uID)
			{
				if( uID == PROPID_TEXT ) {
					this->Fire(uID);
				}
			};
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
