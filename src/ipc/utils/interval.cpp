#include "interval.hpp"

#ifdef IPC_TOOLKIT_WITH_FILIB

namespace ipc {

filib::Interval squared_norm(Eigen::ConstRef<VectorXI> x)
{
    filib::Interval sqr_norm(0);
    for (int i = 0; i < x.size(); i++) {
        sqr_norm += sqr(x[i]);
    }
    return sqr_norm;
}

filib::Interval norm(Eigen::ConstRef<VectorXI> x)
{
    return sqrt(squared_norm(x));
}

} // namespace ipc
#endif