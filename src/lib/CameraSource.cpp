#include "Common.h"
#include "CameraSource.h"

CameraExtrinsics CameraExtrinsics::combine(CameraExtrinsics& a, CameraExtrinsics& b)
{
    CameraExtrinsics out;
    out.rotation = b.rotation * a.rotation;
    out.translation = b.rotation * a.translation + b.translation;
    return out;
}
