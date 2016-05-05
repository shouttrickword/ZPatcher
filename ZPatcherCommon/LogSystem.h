//////////////////////////////////////////////////////////////////////////
//
// ZPatcher - Patcher system - Part of the ZUpdater suite
// Felipe "Zoc" Silveira - (c) 2016
//
//////////////////////////////////////////////////////////////////////////
//
// LogSystem.h
// Simple log system for the patcher
//
//////////////////////////////////////////////////////////////////////////

#ifndef _LOGSYSTEM_H_
#define _LOGSYSTEM_H_

#include <stdio.h>
#include <string>

namespace ZPatcher
{
	extern FILE* g_LogSystem;

	// Location should the base directory being currently patched. This function will create a Log/ directory and place files in there. No logging will be done if this isn't called.
	void InitLogSystem(const std::string& location );

	// Build a human-readable timestamp in the format yyyy-mm-dd-hh-mm-ss
	std::string BuildHumanTimeStamp();

	// Add a line to the log file. The format should be the same as the one used in printf
	void Log(const char* format, ...);

	// Close the log file
	void DestroyLogSystem();
}

#endif //_LOGSYSTEM_H_
#pragma once
