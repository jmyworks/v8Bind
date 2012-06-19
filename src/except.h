#ifndef V8BIND_EXCEPT_H_
#define V8BIND_EXCEPT_H_

#include <string>
#include <stdexcept>

namespace v8Bind {

    struct TypeCastFailureException : std::runtime_error {
        static const std::string Message;

        TypeCastFailureException() : 
            std::runtime_error(TypeCastFailureException::Message) { }
    };

    struct ConstCastFailureException : std::runtime_error {
        static const std::string Message;

        ConstCastFailureException()
            :std::runtime_error(ConstCastFailureException::Message) { }
    };

    struct NullReferenceException : std::runtime_error {
        static const std::string Message;

        NullReferenceException() : 
            std::runtime_error(NullReferenceException::Message) { }
    };
    
    struct InvalidOperationException : std::runtime_error {
        static const std::string Message;

        InvalidOperationException() : 
            std::runtime_error(InvalidOperationException::Message) { }
    };
   
	struct ArgumentCountException : std::runtime_error {
        static const std::string Message;

        ArgumentCountException() : 
            std::runtime_error(ArgumentCountException::Message) { }
    };

} // namespace v8Bind

#endif

