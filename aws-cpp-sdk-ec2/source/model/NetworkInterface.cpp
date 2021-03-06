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
#include <aws/ec2/model/NetworkInterface.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

NetworkInterface::NetworkInterface() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_requesterIdHasBeenSet(false),
    m_requesterManaged(false),
    m_requesterManagedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_associationHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(const XmlNode& xmlNode) : 
    m_networkInterfaceIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_requesterIdHasBeenSet(false),
    m_requesterManaged(false),
    m_requesterManagedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_associationHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterface& NetworkInterface::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = StringUtils::Trim(networkInterfaceIdNode.GetText().c_str());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = StringUtils::Trim(subnetIdNode.GetText().c_str());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = StringUtils::Trim(vpcIdNode.GetText().c_str());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = StringUtils::Trim(ownerIdNode.GetText().c_str());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode requesterIdNode = resultNode.FirstChild("requesterId");
    if(!requesterIdNode.IsNull())
    {
      m_requesterId = StringUtils::Trim(requesterIdNode.GetText().c_str());
      m_requesterIdHasBeenSet = true;
    }
    XmlNode requesterManagedNode = resultNode.FirstChild("requesterManaged");
    if(!requesterManagedNode.IsNull())
    {
      m_requesterManaged = StringUtils::ConvertToBool(StringUtils::Trim(requesterManagedNode.GetText().c_str()).c_str());
      m_requesterManagedHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = NetworkInterfaceStatusMapper::GetNetworkInterfaceStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode macAddressNode = resultNode.FirstChild("macAddress");
    if(!macAddressNode.IsNull())
    {
      m_macAddress = StringUtils::Trim(macAddressNode.GetText().c_str());
      m_macAddressHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = StringUtils::Trim(privateIpAddressNode.GetText().c_str());
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode privateDnsNameNode = resultNode.FirstChild("privateDnsName");
    if(!privateDnsNameNode.IsNull())
    {
      m_privateDnsName = StringUtils::Trim(privateDnsNameNode.GetText().c_str());
      m_privateDnsNameHasBeenSet = true;
    }
    XmlNode sourceDestCheckNode = resultNode.FirstChild("sourceDestCheck");
    if(!sourceDestCheckNode.IsNull())
    {
      m_sourceDestCheck = StringUtils::ConvertToBool(StringUtils::Trim(sourceDestCheckNode.GetText().c_str()).c_str());
      m_sourceDestCheckHasBeenSet = true;
    }
    XmlNode groupsNode = resultNode.FirstChild("Groups");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("item");
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember);
        groupsMember = groupsMember.NextNode("item");
      }

      m_groupsHasBeenSet = true;
    }
    XmlNode attachmentNode = resultNode.FirstChild("attachment");
    if(!attachmentNode.IsNull())
    {
      m_attachment = attachmentNode;
      m_attachmentHasBeenSet = true;
    }
    XmlNode associationNode = resultNode.FirstChild("association");
    if(!associationNode.IsNull())
    {
      m_association = associationNode;
      m_associationHasBeenSet = true;
    }
    XmlNode tagSetNode = resultNode.FirstChild("TagSet");
    if(!tagSetNode.IsNull())
    {
      XmlNode tagSetMember = tagSetNode.FirstChild("item");
      while(!tagSetMember.IsNull())
      {
        m_tagSet.push_back(tagSetMember);
        tagSetMember = tagSetMember.NextNode("item");
      }

      m_tagSetHasBeenSet = true;
    }
    XmlNode privateIpAddressesNode = resultNode.FirstChild("PrivateIpAddresses");
    if(!privateIpAddressesNode.IsNull())
    {
      XmlNode privateIpAddressesMember = privateIpAddressesNode.FirstChild("item");
      while(!privateIpAddressesMember.IsNull())
      {
        m_privateIpAddresses.push_back(privateIpAddressesMember);
        privateIpAddressesMember = privateIpAddressesMember.NextNode("item");
      }

      m_privateIpAddressesHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_requesterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequesterId=" << StringUtils::URLEncode(m_requesterId.c_str()) << "&";
  }
  if(m_requesterManagedHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequesterManaged=" << m_requesterManaged << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << NetworkInterfaceStatusMapper::GetNameForNetworkInterfaceStatus(m_status) << "&";
  }
  if(m_macAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
  if(m_sourceDestCheckHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDestCheck=" << m_sourceDestCheck << "&";
  }
  if(m_groupsHasBeenSet)
  {
      for(auto& item : m_groups)
      {
        Aws::StringStream groupsSs;
        groupsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, groupsSs.str().c_str());
      }
  }
  if(m_attachmentHasBeenSet)
  {
      Aws::StringStream attachmentLocationAndMemberSs;
      attachmentLocationAndMemberSs << location << index << locationValue << ".Attachment";
      m_attachment.OutputToStream(oStream, attachmentLocationAndMemberSs.str().c_str());
  }
  if(m_associationHasBeenSet)
  {
      Aws::StringStream associationLocationAndMemberSs;
      associationLocationAndMemberSs << location << index << locationValue << ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMemberSs.str().c_str());
  }
  if(m_tagSetHasBeenSet)
  {
      for(auto& item : m_tagSet)
      {
        Aws::StringStream tagSetSs;
        tagSetSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, tagSetSs.str().c_str());
      }
  }
  if(m_privateIpAddressesHasBeenSet)
  {
      for(auto& item : m_privateIpAddresses)
      {
        Aws::StringStream privateIpAddressesSs;
        privateIpAddressesSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
      }
  }
}

void NetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_requesterIdHasBeenSet)
  {
      oStream << location << ".RequesterId=" << StringUtils::URLEncode(m_requesterId.c_str()) << "&";
  }
  if(m_requesterManagedHasBeenSet)
  {
      oStream << location << ".RequesterManaged=" << m_requesterManaged << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << NetworkInterfaceStatusMapper::GetNameForNetworkInterfaceStatus(m_status) << "&";
  }
  if(m_macAddressHasBeenSet)
  {
      oStream << location << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
  if(m_sourceDestCheckHasBeenSet)
  {
      oStream << location << ".SourceDestCheck=" << m_sourceDestCheck << "&";
  }
  if(m_groupsHasBeenSet)
  {
      for(auto& item : m_groups)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_attachmentHasBeenSet)
  {
      Aws::String attachmentLocationAndMember(location);
      attachmentLocationAndMember += ".Attachment";
      m_attachment.OutputToStream(oStream, attachmentLocationAndMember.c_str());
  }
  if(m_associationHasBeenSet)
  {
      Aws::String associationLocationAndMember(location);
      associationLocationAndMember += ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMember.c_str());
  }
  if(m_tagSetHasBeenSet)
  {
      for(auto& item : m_tagSet)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_privateIpAddressesHasBeenSet)
  {
      for(auto& item : m_privateIpAddresses)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
