#ifndef _ROS_robocars_msgs_robocars_radio_channels_h
#define _ROS_robocars_msgs_robocars_radio_channels_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace robocars_msgs
{

  class robocars_radio_channels : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint32_t _ch1_type;
      _ch1_type ch1;
      typedef uint32_t _ch2_type;
      _ch2_type ch2;
      typedef uint32_t _ch3_type;
      _ch3_type ch3;
      typedef uint32_t _ch4_type;
      _ch4_type ch4;
      typedef uint32_t _ch5_type;
      _ch5_type ch5;
      typedef uint32_t _ch6_type;
      _ch6_type ch6;

    robocars_radio_channels():
      header(),
      ch1(0),
      ch2(0),
      ch3(0),
      ch4(0),
      ch5(0),
      ch6(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->ch1 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ch1 >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ch1 >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ch1 >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ch1);
      *(outbuffer + offset + 0) = (this->ch2 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ch2 >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ch2 >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ch2 >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ch2);
      *(outbuffer + offset + 0) = (this->ch3 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ch3 >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ch3 >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ch3 >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ch3);
      *(outbuffer + offset + 0) = (this->ch4 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ch4 >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ch4 >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ch4 >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ch4);
      *(outbuffer + offset + 0) = (this->ch5 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ch5 >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ch5 >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ch5 >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ch5);
      *(outbuffer + offset + 0) = (this->ch6 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ch6 >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ch6 >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ch6 >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ch6);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->ch1 =  ((uint32_t) (*(inbuffer + offset)));
      this->ch1 |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ch1 |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ch1 |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ch1);
      this->ch2 =  ((uint32_t) (*(inbuffer + offset)));
      this->ch2 |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ch2 |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ch2 |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ch2);
      this->ch3 =  ((uint32_t) (*(inbuffer + offset)));
      this->ch3 |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ch3 |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ch3 |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ch3);
      this->ch4 =  ((uint32_t) (*(inbuffer + offset)));
      this->ch4 |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ch4 |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ch4 |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ch4);
      this->ch5 =  ((uint32_t) (*(inbuffer + offset)));
      this->ch5 |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ch5 |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ch5 |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ch5);
      this->ch6 =  ((uint32_t) (*(inbuffer + offset)));
      this->ch6 |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ch6 |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ch6 |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ch6);
     return offset;
    }

    const char * getType(){ return "robocars_msgs/robocars_radio_channels"; };
    const char * getMD5(){ return "d5c76f940a4463f4e31bb1f1ea5bbcd9"; };

  };

}
#endif
