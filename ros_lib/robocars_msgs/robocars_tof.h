#ifndef _ROS_robocars_msgs_robocars_tof_h
#define _ROS_robocars_msgs_robocars_tof_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace robocars_msgs
{

  class robocars_tof : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint32_t _distance_type;
      _distance_type distance;

    robocars_tof():
      header(),
      distance(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->distance >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->distance >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->distance >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->distance >> (8 * 3)) & 0xFF;
      offset += sizeof(this->distance);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->distance =  ((uint32_t) (*(inbuffer + offset)));
      this->distance |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->distance |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->distance |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->distance);
     return offset;
    }

    const char * getType(){ return "robocars_msgs/robocars_tof"; };
    const char * getMD5(){ return "9998aa192ac6d5fc638928e3ded705f8"; };

  };

}
#endif
