// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/Library.h>
#include <CesiumGltf/NamedObject.h>

#include <cstdint>
#include <optional>
#include <string>

namespace CesiumGltf {
/**
 * @brief Image data used to create a texture. Image **MAY** be referenced by an
 * URI (or IRI) or a buffer view index.
 */
struct CESIUMGLTF_API ImageSpec : public CesiumGltf::NamedObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "Image";

  /**
   * @brief Known values for The image's media type. This field **MUST** be
   * defined when `bufferView` is defined.
   */
  struct MimeType {
    /** @brief `image/jpeg` */
    inline static const std::string image_jpeg = "image/jpeg";

    /** @brief `image/png` */
    inline static const std::string image_png = "image/png";
  };

  /**
   * @brief The URI (or IRI) of the image.
   *
   * Relative paths are relative to the current glTF asset.  Instead of
   * referencing an external file, this field **MAY** contain a `data:`-URI.
   * This field **MUST NOT** be defined when `bufferView` is defined.
   */
  std::optional<std::string> uri;

  /**
   * @brief The image's media type. This field **MUST** be defined when
   * `bufferView` is defined.
   *
   * Known values are defined in {@link MimeType}.
   *
   */
  std::optional<std::string> mimeType;

  /**
   * @brief The index of the bufferView that contains the image. This field
   * **MUST NOT** be defined when `uri` is defined.
   */
  int32_t bufferView = -1;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ImageSpec));
    accum += CesiumGltf::NamedObject::getSizeBytes() -
             int64_t(sizeof(CesiumGltf::NamedObject));
    if (this->uri) {
      accum += int64_t(this->uri->capacity() * sizeof(char));
    }
    return accum;
  }

protected:
  /**
   * @brief This class is not meant to be instantiated directly. Use {@link Image} instead.
   */
  ImageSpec() = default;
  friend struct Image;
};
} // namespace CesiumGltf
