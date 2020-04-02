#ifndef _ROS_robocars_msgs_robocars_actuator_output_h
#define _ROS_robocars_msgs_robocars_actuator_output_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace robocars_msgs
{

  class robocars_actuator_output : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint32_t _pwm_type;
      _pwm_type pwm;
      typedef float _norm_type;
      _norm_type norm;

    robocars_actuator_output():
      header(),
      pwm(0),
      norm(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->pwm >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm);
      union {
        float real;
        uint32_t base;
      } u_norm;
      u_norm.real = this->norm;
      *(outbuffer + offset + 0) = (u_norm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_norm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_norm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_norm.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->norm);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->pwm =  ((uint32_t) (*(inbuffer + offset)));
      this->pwm |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->pwm |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->pwm |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->pwm);
      union {
        float real;
        uint32_t base;
      } u_norm;
      u_norm.base = 0;
      u_norm.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_norm.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_norm.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_norm.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->norm = u_norm.real;
      offset += sizeof(this->norm);
     return offset;
    }

    const char * getType(){ return "robocars_msgs/robocars_actuator_output"; };
    const char * getMD5(){ return "7d4270bf030a52cc8f865b988ea2e5f9"; };

  };

}
#endif
