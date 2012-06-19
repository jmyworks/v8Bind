#ifndef V8BIND_CONVERTER_H_
#define V8BIND_CONVERTER_H_

#include <v8.h>

namespace v8Bind {

    //TODO: potentially type-check arguments for value types

    template <typename T>
    struct Converter;

	template <typename T>
	struct ConverterTraits
	{
		typedef T returnType;
	};

    template <typename T>
    inline v8::Handle<v8::Value> ToV8(const T &value) {
        return Converter<T>::ToV8(value);
    }

    template <typename T>
    inline ConverterTraits<T>::returnType FromV8(const v8::Handle<v8::Value> &value) {
        return Converter<T>::FromV8(value);
    }

#define DEFINE_CONVERTER_CONST_REFRENCE_VERSION(_typename)						\
	template <>																	\
	struct ConverterTraits<const _typename&>									\
	{																			\
		typedef _typename returnType;											\
	};																			\
																				\
	template <>																	\
	struct Converter<const _typename &>											\
	{																			\
		static inline v8::Handle<v8::Value> ToV8(const _typename &value)		\
		{																		\
			return Converter<_typename>::ToV8(value);							\
		}																		\
																				\
		static inline _typename FromV8(v8::Handle<v8::Value> HValue)			\
		{																		\
			return Converter<_typename>::FromV8(HValue);						\
		}																		\
	}

} // namespace v8Bind

#endif
