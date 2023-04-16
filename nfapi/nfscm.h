//
// 	NetFilterSDK 
// 	Copyright (C) 2009 Vitaly Sidorov
//	All rights reserved.
//
//	This file is a part of the NetFilter SDK.
//	The code and information is provided "as-is" without
//	warranty of any kind, either expressed or implied.
//


#ifndef _NFSCM_H
#define _NFSCM_H

namespace nfapi
{
	HANDLE nf_openDevice(const char * driverName);
	bool nf_applyFlags(bool addChanges);
}

#endif

