/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 */

namespace carbon {
namespace test {

inline void TestRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeUserTypeField(1 /* field id */, key());
  writer.writeInt64Field(2 /* field id */, static_cast<int64_t>(testEnum()));
  writer.writeBoolField(3 /* field id */, testBool());
  writer.writeCharField(4 /* field id */, testChar());
  writer.writeInt8Field(5 /* field id */, testInt8());
  writer.writeInt16Field(6 /* field id */, testInt16());
  writer.writeInt32Field(7 /* field id */, testInt32());
  writer.writeInt64Field(8 /* field id */, testInt64());
  writer.writeUInt8Field(9 /* field id */, testUInt8());
  writer.writeUInt16Field(10 /* field id */, testUInt16());
  writer.writeUInt32Field(11 /* field id */, testUInt32());
  writer.writeUInt64Field(12 /* field id */, testUInt64());
  writer.writeFloatField(13 /* field id */, testFloat());
  writer.writeDoubleField(14 /* field id */, testDouble());
  writer.writeBinaryField(15 /* field id */, testShortString());
  writer.writeBinaryField(16 /* field id */, testLongString());
  writer.writeBinaryField(17 /* field id */, testIobuf());
  writer.writeFieldHeader(carbon::FieldType::Struct, 18);
  testStruct().serialize(writer);
  writer.writeVectorField<std::string>(19 /* field id */, testList());
  writer.writeUserTypeField(20 /* field id */, testOptionalString());
  writer.writeUserTypeField(21 /* field id */, testOptionalIobuf());
  writer.writeFieldHeader(carbon::FieldType::Struct, -1);
  _carbon_simplestruct_.serialize(writer);
  writer.writeStructEnd();
  writer.writeStop();
}

inline void TestRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case -1: {
        _carbon_simplestruct_.deserialize(reader);
        break;
      }
      case 1: {
        key() = reader.readUserTypeField<carbon::Keys<folly::IOBuf>>();
        break;
      }
      case 2: {
        testEnum() =
            static_cast<test2::util::SimpleEnum>(reader.readInt64Field());
        break;
      }
      case 3: {
        testBool() = reader.readBoolField(fieldType);
        break;
      }
      case 4: {
        testChar() = reader.readCharField();
        break;
      }
      case 5: {
        testInt8() = reader.readInt8Field();
        break;
      }
      case 6: {
        testInt16() = reader.readInt16Field();
        break;
      }
      case 7: {
        testInt32() = reader.readInt32Field();
        break;
      }
      case 8: {
        testInt64() = reader.readInt64Field();
        break;
      }
      case 9: {
        testUInt8() = reader.readUInt8Field();
        break;
      }
      case 10: {
        testUInt16() = reader.readUInt16Field();
        break;
      }
      case 11: {
        testUInt32() = reader.readUInt32Field();
        break;
      }
      case 12: {
        testUInt64() = reader.readUInt64Field();
        break;
      }
      case 13: {
        testFloat() = reader.readFloatField();
        break;
      }
      case 14: {
        testDouble() = reader.readDoubleField();
        break;
      }
      case 15: {
        testShortString() = reader.readBinaryField<std::string>();
        break;
      }
      case 16: {
        testLongString() = reader.readBinaryField<std::string>();
        break;
      }
      case 17: {
        testIobuf() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 18: {
        testStruct().deserialize(reader);
        break;
      }
      case 19: {
        testList() = reader.readVectorField<std::string>();
        break;
      }
      case 20: {
        testOptionalString() =
            reader.readUserTypeField<folly::Optional<std::string>>();
        break;
      }
      case 21: {
        testOptionalIobuf() =
            reader.readUserTypeField<folly::Optional<folly::IOBuf>>();
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

inline void TestReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeResultField(1 /* field id */, result());
  writer.writeStructEnd();
  writer.writeStop();
}

inline void TestReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        result() = reader.readResultField();
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

} // test
} // carbon
