#include "except.h"

namespace v8Bind
{
	const std::string TypeCastFailureException::Message = "Type conversion failure";
	const std::string ConstCastFailureException::Message = "Const cast failure";
	const std::string NullReferenceException::Message = "Holder is empty or missing.";
	const std::string InvalidOperationException::Message = "Invalid operation";
	const std::string ArgumentCountException::Message = "Incorrect argument count";
}