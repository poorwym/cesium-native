// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <Cesium3DTiles/Library.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <vector>

namespace Cesium3DTiles {
/**
 * @brief 3D Tiles extension for cylinder region bounding volumes.
 */
struct CESIUM3DTILES_API Extension3dTilesBoundingVolumeCylinder final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName =
      "Extension3dTilesBoundingVolumeCylinder";
  /** @brief The official name of the extension. This should be the same as its
   * key in the `extensions` object. */
  static constexpr const char* ExtensionName =
      "3DTILES_bounding_volume_cylinder";

  /**
   * @brief The inner radius of the cylinder region along the x and y axes, in
   * meters.
   */
  double minRadius = double();

  /**
   * @brief The outer radius of the cylinder region along the x and y axes, in
   * meters.
   */
  double maxRadius = double();

  /**
   * @brief The height of the cylinder in meters along the z-axis, in meters.
   */
  double height = double();

  /**
   * @brief The minimum angle of the cylinder region in radians. In other words,
   * this is the angle where the cylinder region starts. Must be in the range
   * [-pi, pi].
   */
  double minAngle = -3.14159265359;

  /**
   * @brief The maximum angle of the cylinder region in radians. In other words,
   * this is the angle where the cylinder region ends. Must be in the range
   * [-pi, pi].
   */
  double maxAngle = 3.14159265359;

  /**
   * @brief The cylinder's translation along the x, y, and z axes.
   */
  std::vector<double> translation = {0, 0, 0};

  /**
   * @brief The cylinder's rotation, represented by a unit quaternion in the
   * order (x, y, z, w), where w is the scalar.
   */
  std::vector<double> rotation = {0, 0, 0, 1};

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(Extension3dTilesBoundingVolumeCylinder));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    accum += int64_t(sizeof(double) * this->translation.capacity());
    accum += int64_t(sizeof(double) * this->rotation.capacity());
    return accum;
  }
};
} // namespace Cesium3DTiles
