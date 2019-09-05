/*
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

Product name: redemption, a FLOSS RDP proxy
Copyright (C) Wallix 2010-2018
Author(s): Jonathan Poelen
*/

#pragma once

#define BOOST_TEST_NO_OLD_TOOLS

#ifdef RED_TEST_MODULE
# define BOOST_TEST_MODULE RED_TEST_MODULE
#endif

#include <boost/test/unit_test.hpp>
#include <boost/version.hpp>


#define RED_AUTO_TEST_CASE(...) BOOST_AUTO_TEST_CASE(__VA_ARGS__) /*NOLINT*/

#define RED_FAIL(...) BOOST_FAIL(__VA_ARGS__) /*NOLINT*/
#define RED_ERROR(...) BOOST_ERROR(__VA_ARGS__) /*NOLINT*/

#define RED_TEST_DONT_PRINT_LOG_VALUE BOOST_TEST_DONT_PRINT_LOG_VALUE
#define RED_TEST_PRINT_TYPE_FUNCTION_NAME boost_test_print_type
#define RED_TEST_PRINT_TYPE_STRUCT_NAME boost::test_tools::tt_detail::print_log_value

#if defined(REDEMPTION_UNIT_TEST_FAST_CHECK) && REDEMPTION_UNIT_TEST_FAST_CHECK == 1
//@{
#  define RED_TEST_CHECKPOINT(...)
#  define RED_TEST_PASSPOINT(...)
#  define RED_TEST_CONTEXT(...)

#  define RED_TEST(...) BOOST_TEST((__VA_ARGS__)) /*NOLINT*/
#  define RED_TEST_WARN(...) BOOST_TEST_WARN((__VA_ARGS__)) /*NOLINT*/
#  define RED_TEST_CHECK(...) BOOST_TEST_CHECK((__VA_ARGS__)) /*NOLINT*/
#  define RED_TEST_REQUIRE(...) BOOST_TEST_REQUIRE((__VA_ARGS__)) /*NOLINT*/

#  define RED_CHECK_NO_THROW(...) BOOST_CHECK_NO_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_THROW(...) BOOST_CHECK_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_EXCEPTION(...) BOOST_CHECK_EXCEPTION(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_EQUAL(a, b) BOOST_CHECK(((a) == (b))) /*NOLINT*/
#  define RED_CHECK_NE(a, b) BOOST_CHECK(((a) != (b))) /*NOLINT*/
#  define RED_CHECK_LT(a, b) BOOST_CHECK(((a) < (b))) /*NOLINT*/
#  define RED_CHECK_LE(a, b) BOOST_CHECK(((a) <= (b))) /*NOLINT*/
#  define RED_CHECK_GT(a, b) BOOST_CHECK(((a) > (b))) /*NOLINT*/
#  define RED_CHECK_GE(a, b) BOOST_CHECK(((a) >= (b))) /*NOLINT*/
#  define RED_CHECK(...) BOOST_CHECK((__VA_ARGS__)) /*NOLINT*/
#  define RED_CHECK_MESSAGE(x, ...) BOOST_CHECK_MESSAGE((x), __VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_EQUAL_COLLECTIONS(...) BOOST_CHECK(std::equal(__VA_ARGS__)) /*NOLINT*/
#  define RED_CHECK_PREDICATE(...) BOOST_CHECK_PREDICATE(__VA_ARGS__) /*NOLINT*/

#  define RED_REQUIRE_NO_THROW(...) BOOST_REQUIRE_NO_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_THROW(...) BOOST_REQUIRE_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_EXCEPTION(...) BOOST_REQUIRE_EXCEPTION(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_EQUAL(a, b) BOOST_REQUIRE(((a) == (b))) /*NOLINT*/
#  define RED_REQUIRE_NE(a, b) BOOST_REQUIRE(((a) != (b))) /*NOLINT*/
#  define RED_REQUIRE_LT(a, b) BOOST_REQUIRE(((a) < (b))) /*NOLINT*/
#  define RED_REQUIRE_LE(a, b) BOOST_REQUIRE(((a) <= (b))) /*NOLINT*/
#  define RED_REQUIRE_GT(a, b) BOOST_REQUIRE(((a) > (b))) /*NOLINT*/
#  define RED_REQUIRE_GE(a, b) BOOST_REQUIRE(((a) >= (b))) /*NOLINT*/
#  define RED_REQUIRE(...) BOOST_REQUIRE((__VA_ARGS__)) /*NOLINT*/
#  define RED_REQUIRE_MESSAGE(x, ...) BOOST_REQUIRE_MESSAGE((x), __VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_EQUAL_COLLECTIONS(...) BOOST_REQUIRE(std::equal(__VA_ARGS__)) /*NOLINT*/
#  define RED_REQUIRE_PREDICATE(...) BOOST_REQUIRE_PREDICATE(__VA_ARGS__) /*NOLINT*/
//@}
#else
//@{
#  define RED_TEST_CHECKPOINT(...) BOOST_TEST_CHECKPOINT(__VA_ARGS__) /*NOLINT*/
#  define RED_TEST_PASSPOINT(...) BOOST_TEST_PASSPOINT(__VA_ARGS__) /*NOLINT*/

#  define RED_TEST_CONTEXT(...) BOOST_TEST_CONTEXT(__VA_ARGS__) /*NOLINT*/

#  define RED_TEST(...) BOOST_TEST(__VA_ARGS__) /*NOLINT*/
#  define RED_TEST_WARN(...) BOOST_TEST_WARN(__VA_ARGS__) /*NOLINT*/
#  define RED_TEST_CHECK(...) BOOST_TEST_CHECK(__VA_ARGS__) /*NOLINT*/
#  define RED_TEST_REQUIRE(...) BOOST_TEST_REQUIRE(__VA_ARGS__) /*NOLINT*/

#  define RED_CHECK_NO_THROW(...) BOOST_CHECK_NO_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_THROW(...) BOOST_CHECK_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_EXCEPTION(...) BOOST_CHECK_EXCEPTION(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_EQUAL(a, b) BOOST_CHECK((a) == (b)) /*NOLINT*/
#  define RED_CHECK_NE(a, b) BOOST_CHECK((a) != (b)) /*NOLINT*/
#  define RED_CHECK_LT(a, b) BOOST_CHECK((a) < (b)) /*NOLINT*/
#  define RED_CHECK_LE(a, b) BOOST_CHECK((a) >= (b)) /*NOLINT*/
#  define RED_CHECK_GT(a, b) BOOST_CHECK((a) > (b)) /*NOLINT*/
#  define RED_CHECK_GE(a, b) BOOST_CHECK((a) >= (b)) /*NOLINT*/
#  define RED_CHECK(...) BOOST_CHECK(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_MESSAGE(...) BOOST_CHECK_MESSAGE(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_EQUAL_COLLECTIONS(...) BOOST_CHECK_EQUAL_COLLECTIONS(__VA_ARGS__) /*NOLINT*/
#  define RED_CHECK_PREDICATE(...) BOOST_CHECK_PREDICATE(__VA_ARGS__) /*NOLINT*/


#  define RED_REQUIRE_NO_THROW(...) BOOST_REQUIRE_NO_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_THROW(...) BOOST_REQUIRE_THROW(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_EXCEPTION(...) BOOST_REQUIRE_EXCEPTION(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_EQUAL(a, b) BOOST_REQUIRE((a) == (b)) /*NOLINT*/
#  define RED_REQUIRE_NE(a, b) BOOST_REQUIRE((a) != (b)) /*NOLINT*/
#  define RED_REQUIRE_LT(a, b) BOOST_REQUIRE((a) < (b)) /*NOLINT*/
#  define RED_REQUIRE_LE(a, b) BOOST_REQUIRE((a) <= (b)) /*NOLINT*/
#  define RED_REQUIRE_GT(a, b) BOOST_REQUIRE((a) > (b)) /*NOLINT*/
#  define RED_REQUIRE_GE(a, b) BOOST_REQUIRE((a) >= (b)) /*NOLINT*/
#  define RED_REQUIRE(...) BOOST_REQUIRE(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_MESSAGE(...) BOOST_REQUIRE_MESSAGE(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_EQUAL_COLLECTIONS(...) BOOST_REQUIRE_EQUAL_COLLECTIONS(__VA_ARGS__) /*NOLINT*/
#  define RED_REQUIRE_PREDICATE(...) BOOST_REQUIRE_PREDICATE(__VA_ARGS__) /*NOLINT*/
//@}
#endif

#if BOOST_VERSION < 106300
namespace boost {
namespace test_tools {
namespace tt_detail {

template<>
struct BOOST_TEST_DECL print_log_value<decltype(nullptr)> {
    void operator()(std::ostream& ostr, decltype(nullptr)) { ostr<<"nullptr"; }
};

}}}
#endif


namespace redemption_unit_test__
{

template<class T, class Fd>
struct fn_ctx_t
{
    char const* name;
    T x;
    Fd g;

    operator T const& () const noexcept { return x; }
    operator T& () noexcept { return x; }
};

#define MK_OP(op)                                                         \
    template<class T, class Fd, class U>                                  \
    bool operator op (fn_ctx_t<T, Fd> const& fctx, U const& x)            \
    {                                                                     \
        return fctx.x op x;                                               \
    }                                                                     \
    template<class T, class Fd, class U>                                  \
    bool operator op (fn_ctx_t<T, Fd> const&,                             \
        boost::test_tools::assertion::value_expr<U> const&) = delete;     \
    template<class U, class T, class Fd>                                  \
    bool operator op (U const& x, fn_ctx_t<T, Fd> const& fctx)            \
    {                                                                     \
        return x op fctx.x;                                               \
    }                                                                     \
    template<class U, class T, class Fd>                                  \
    bool operator op (boost::test_tools::assertion::value_expr<U> const&, \
        fn_ctx_t<T, Fd> const&) = delete

MK_OP(==);
MK_OP(!=);
MK_OP(<);
MK_OP(<=);
MK_OP(>);
MK_OP(>=);

#undef MK_OP

template<class X, class... Xs>
auto fn_ctx_arg(X const& x, Xs const&... xs)
{
    return [&](std::ostream& out){
        out << x;
        ((out << ", " << boost::test_tools::tt_detail::print_helper(xs)), ...);
    };
}

template<class F, class... Ts>
auto fn_ctx(char const* name, F f, Ts&&... xs)
{
    auto print = fn_ctx_arg(xs...);
    return fn_ctx_t<decltype(f(static_cast<Ts&&>(xs)...)), decltype(print)>{
        name, f(static_cast<Ts&&>(xs)...), print
    };
}

template<class Fr, class Fd>
std::ostream& operator<<(std::ostream& out, fn_ctx_t<Fr, Fd> const& fctx)
{
    out << fctx.name << "(";
    fctx.g(out);
    out << ")= " << fctx.x;
    return out;
}

template<class F>
struct fn_invoker_t
{
    char const* name;
    F f;

    template<class... Xs>
    decltype(auto) operator()(Xs&&... xs) const
    {
        auto print = fn_ctx_arg(xs...);
        return fn_ctx_t<decltype(f(static_cast<Xs&&>(xs)...)), decltype(print)>{
            name, f(static_cast<Xs&&>(xs)...), print
        };
    }

    template<class... Xs>
    decltype(auto) operator()(Xs&&... xs)
    {
        auto print = fn_ctx_arg(xs...);
        return fn_ctx_t<decltype(f(static_cast<Xs&&>(xs)...)), decltype(print)>{
            name, f(static_cast<Xs&&>(xs)...), print
        };
    }
};

template<class F>
constexpr fn_invoker_t<F> fn_invoker(char const* name, F f)
{
    return {name, f};
}

} // namespace redemption_unit_test__

#define RED_TEST_FUNC_CTX(fname) ::redemption_unit_test__::fn_invoker( \
    #fname, [](auto&&... args){ return fname(args...); })

#define RED_TEST_INVOKER(fname) ::redemption_unit_test__::fn_invoker( \
    #fname, [&](auto&&... args){ return fname(args...); })

#define RED_TEST_FUNC(fname, ...) [&]{                             \
    auto BOOST_PP_CAT(fctx__, __LINE__) = RED_TEST_INVOKER(fname); \
    RED_TEST(BOOST_PP_CAT(fctx__, __LINE__)__VA_ARGS__); }()

#define RED_REQUIRE_FUNC(fname, ...) [&]{                          \
    auto BOOST_PP_CAT(fctx__, __LINE__) = RED_TEST_INVOKER(fname); \
    RED_REQUIRE(BOOST_PP_CAT(fctx__, __LINE__)__VA_ARGS__); }()