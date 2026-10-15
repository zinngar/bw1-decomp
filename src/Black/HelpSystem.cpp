#include "GameTimeConstants.h"
#include "HelpSystem.h"

#include "ColourConstants.h" /* For White */
#include "HelpSystemInfo.h"
#include <string> /* For the std::basic_string instantiations */

uint32_t HelpSystem::StopRunningScripts()
{
	return HelpSystem::StopHelpScriptsForNewHelp();
}

GBaseInfo* HelpSystemInfo::GetBaseInfo(uint32_t& info_count)
{
	info_count = 1;
	return &Info;
}
