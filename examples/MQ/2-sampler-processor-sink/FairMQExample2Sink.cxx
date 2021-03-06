/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             * 
 *         GNU Lesser General Public Licence version 3 (LGPL) version 3,        *  
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
/**
 * FairMQExample2Sink.cxx
 *
 * @since 2014-10-10
 * @author A. Rybalchenko
 */

#include "FairMQExample2Sink.h"
#include "FairMQLogger.h"

using namespace std;

FairMQExample2Sink::FairMQExample2Sink()
{
    // register a handler for data arriving on "data2" channel
    OnData("data2", &FairMQExample2Sink::HandleData);
}

// handler is called whenever a message arrives on "data2", with a reference to the message and a sub-channel index (here 0)
bool FairMQExample2Sink::HandleData(FairMQMessagePtr& msg, int /*index*/)
{
    LOG(INFO) << "Received: \"" << string(static_cast<char*>(msg->GetData()), msg->GetSize()) << "\"";

    // return true if want to be called again (otherwise go to IDLE state)
    return true;
}

FairMQExample2Sink::~FairMQExample2Sink()
{
}
