#include "TestMFHasStaticData.hpp"
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
  using namespace boost::mpl::placeholders;
  
  BOOST_TEST((tti::mf_has_static_data
                <
                tti::has_static_member_DSMember<_,_>,
                boost::mpl::identity<AType>,
                boost::mpl::identity<short>
                >
              ::value
            ));
  
  BOOST_TEST((tti::mf_has_static_data
                <
                tti::mtfc_has_static_member_DSMember,
                boost::mpl::identity<AType>,
                boost::mpl::identity<short>
                >
              ::value
            ));
  
  return boost::report_errors();

  }
