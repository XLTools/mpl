namespace boost { namespace mpl {

namespace aux {
template< BOOST_AUX_NTTP_DECL(int, arity_) > struct apply_chooser;
}

template<
      typename F
    >
struct apply0;

template<
      typename F, typename T1
    >
struct apply1;

template<
      typename F, typename T1, typename T2
    >
struct apply2;

template<
      typename F, typename T1, typename T2, typename T3
    >
struct apply3;

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    >
struct apply4;

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5
    >
struct apply5;

}}
