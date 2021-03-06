#ifndef _ROS_pr2_gripper_sensor_msgs_PR2GripperGrabGoal_h
#define _ROS_pr2_gripper_sensor_msgs_PR2GripperGrabGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "pr2_gripper_sensor_msgs/PR2GripperGrabCommand.h"

namespace pr2_gripper_sensor_msgs
{

  class PR2GripperGrabGoal : public ros::Msg
  {
    public:
      pr2_gripper_sensor_msgs::PR2GripperGrabCommand command;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->command.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->command.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "pr2_gripper_sensor_msgs/PR2GripperGrabGoal"; };
    const char * getMD5(){ return "4dec90ce1cb7519ca39577ac65441112"; };

  };

}
#endif