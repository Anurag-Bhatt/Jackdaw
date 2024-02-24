#pragma once


#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Jackdaw {

	class JACKDAW_API Log {

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// Core Logs
#define JD_Core_ERROR(...)    Jackdaw::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JD_Core_WARN(...)     Jackdaw::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JD_Core_INFO(...)     Jackdaw::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JD_Core_TRACE(...)    Jackdaw::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define JD_Core_FATAL(...)    Jackdaw::Log::GetCoreLogger()->fatal(__VA_ARGS__)
							  			   
// Client Logs				  			   
#define JD_ERROR(...)         Jackdaw::Log::GetClientLogger()->error(__VA_ARGS__)
#define JD_WARN(...)          Jackdaw::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JD_INFO(...)          Jackdaw::Log::GetClientLogger()->info(__VA_ARGS__)
#define JD_TRACE(...)         Jackdaw::Log::GetClientLogger()->trace(__VA_ARGS__)
#define JD_FATAL(...)         Jackdaw::Log::GetClientLogger()->fatal(__VA_ARGS__)
