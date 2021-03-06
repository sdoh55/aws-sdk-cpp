/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VolumeType.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VolumeAttachment.h>
#include <aws/ec2/model/Tag.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /*
    <p>Describes a volume.</p>
  */
  class AWS_EC2_API CreateVolumeResponse
  {
  public:
    CreateVolumeResponse();
    CreateVolumeResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateVolumeResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>The ID of the volume.</p>
    */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /*
     <p>The ID of the volume.</p>
    */
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }

    /*
     <p>The ID of the volume.</p>
    */
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = value; }

    /*
     <p>The ID of the volume.</p>
    */
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }

    /*
     <p>The ID of the volume.</p>
    */
    inline CreateVolumeResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /*
     <p>The ID of the volume.</p>
    */
    inline CreateVolumeResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(value); return *this;}

    /*
     <p>The ID of the volume.</p>
    */
    inline CreateVolumeResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

    /*
     <p>The size of the volume, in GiBs.</p>
    */
    inline long GetSize() const{ return m_size; }

    /*
     <p>The size of the volume, in GiBs.</p>
    */
    inline void SetSize(long value) { m_size = value; }

    /*
     <p>The size of the volume, in GiBs.</p>
    */
    inline CreateVolumeResponse& WithSize(long value) { SetSize(value); return *this;}

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = value; }

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline CreateVolumeResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline CreateVolumeResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /*
     <p>The snapshot from which the volume was created, if applicable.</p>
    */
    inline CreateVolumeResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = value; }

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline CreateVolumeResponse& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline CreateVolumeResponse& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p>The Availability Zone for the volume.</p>
    */
    inline CreateVolumeResponse& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /*
     <p>The volume state.</p>
    */
    inline const VolumeState& GetState() const{ return m_state; }

    /*
     <p>The volume state.</p>
    */
    inline void SetState(const VolumeState& value) { m_state = value; }

    /*
     <p>The volume state.</p>
    */
    inline void SetState(VolumeState&& value) { m_state = value; }

    /*
     <p>The volume state.</p>
    */
    inline CreateVolumeResponse& WithState(const VolumeState& value) { SetState(value); return *this;}

    /*
     <p>The volume state.</p>
    */
    inline CreateVolumeResponse& WithState(VolumeState&& value) { SetState(value); return *this;}

    /*
     <p>The time stamp when volume creation was initiated.</p>
    */
    inline double GetCreateTime() const{ return m_createTime; }

    /*
     <p>The time stamp when volume creation was initiated.</p>
    */
    inline void SetCreateTime(double value) { m_createTime = value; }

    /*
     <p>The time stamp when volume creation was initiated.</p>
    */
    inline CreateVolumeResponse& WithCreateTime(double value) { SetCreateTime(value); return *this;}

    /*
     <p>Information about the volume attachments.</p>
    */
    inline const Aws::Vector<VolumeAttachment>& GetAttachments() const{ return m_attachments; }

    /*
     <p>Information about the volume attachments.</p>
    */
    inline void SetAttachments(const Aws::Vector<VolumeAttachment>& value) { m_attachments = value; }

    /*
     <p>Information about the volume attachments.</p>
    */
    inline void SetAttachments(Aws::Vector<VolumeAttachment>&& value) { m_attachments = value; }

    /*
     <p>Information about the volume attachments.</p>
    */
    inline CreateVolumeResponse& WithAttachments(const Aws::Vector<VolumeAttachment>& value) { SetAttachments(value); return *this;}

    /*
     <p>Information about the volume attachments.</p>
    */
    inline CreateVolumeResponse& WithAttachments(Aws::Vector<VolumeAttachment>&& value) { SetAttachments(value); return *this;}

    /*
     <p>Information about the volume attachments.</p>
    */
    inline CreateVolumeResponse& AddAttachments(const VolumeAttachment& value) { m_attachments.push_back(value); return *this; }

    /*
     <p>Information about the volume attachments.</p>
    */
    inline CreateVolumeResponse& AddAttachments(VolumeAttachment&& value) { m_attachments.push_back(value); return *this; }

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = value; }

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline CreateVolumeResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline CreateVolumeResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline CreateVolumeResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /*
     <p>Any tags assigned to the volume.</p>
    */
    inline CreateVolumeResponse& AddTags(Tag&& value) { m_tags.push_back(value); return *this; }

    /*
     <p>The volume type. This can be <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, or <code>standard</code> for Magnetic volumes.</p>
    */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /*
     <p>The volume type. This can be <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, or <code>standard</code> for Magnetic volumes.</p>
    */
    inline void SetVolumeType(const VolumeType& value) { m_volumeType = value; }

    /*
     <p>The volume type. This can be <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, or <code>standard</code> for Magnetic volumes.</p>
    */
    inline void SetVolumeType(VolumeType&& value) { m_volumeType = value; }

    /*
     <p>The volume type. This can be <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, or <code>standard</code> for Magnetic volumes.</p>
    */
    inline CreateVolumeResponse& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /*
     <p>The volume type. This can be <code>gp2</code> for General Purpose (SSD) volumes, <code>io1</code> for Provisioned IOPS (SSD) volumes, or <code>standard</code> for Magnetic volumes.</p>
    */
    inline CreateVolumeResponse& WithVolumeType(VolumeType&& value) { SetVolumeType(value); return *this;}

    /*
     <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS (SSD) volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose (SSD) volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose (SSD) baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS (SSD) volumes and 3 to 10000 for General Purpose (SSD) volumes.</p> <p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>standard</code> or <code>gp2</code> volumes.</p>
    */
    inline long GetIops() const{ return m_iops; }

    /*
     <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS (SSD) volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose (SSD) volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose (SSD) baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS (SSD) volumes and 3 to 10000 for General Purpose (SSD) volumes.</p> <p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>standard</code> or <code>gp2</code> volumes.</p>
    */
    inline void SetIops(long value) { m_iops = value; }

    /*
     <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS (SSD) volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose (SSD) volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose (SSD) baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Constraint: Range is 100 to 20000 for Provisioned IOPS (SSD) volumes and 3 to 10000 for General Purpose (SSD) volumes.</p> <p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>standard</code> or <code>gp2</code> volumes.</p>
    */
    inline CreateVolumeResponse& WithIops(long value) { SetIops(value); return *this;}

    /*
     <p>Indicates whether the volume will be encrypted.</p>
    */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /*
     <p>Indicates whether the volume will be encrypted.</p>
    */
    inline void SetEncrypted(bool value) { m_encrypted = value; }

    /*
     <p>Indicates whether the volume will be encrypted.</p>
    */
    inline CreateVolumeResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = value; }

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline CreateVolumeResponse& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline CreateVolumeResponse& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /*
     <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
    */
    inline CreateVolumeResponse& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateVolumeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateVolumeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_volumeId;
    long m_size;
    Aws::String m_snapshotId;
    Aws::String m_availabilityZone;
    VolumeState m_state;
    double m_createTime;
    Aws::Vector<VolumeAttachment> m_attachments;
    Aws::Vector<Tag> m_tags;
    VolumeType m_volumeType;
    long m_iops;
    bool m_encrypted;
    Aws::String m_kmsKeyId;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws