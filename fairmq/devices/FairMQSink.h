/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             * 
 *         GNU Lesser General Public Licence version 3 (LGPL) version 3,        *  
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
/**
 * FairMQSink.h
 *
 * @since 2013-01-09
 * @author D. Klein, A. Rybalchenko
 */

#ifndef FAIRMQSINK_H_
#define FAIRMQSINK_H_

#include <string>

#include "FairMQDevice.h"

class FairMQSink : public FairMQDevice
{
  public:
    FairMQSink();
    virtual ~FairMQSink();

  protected:
    uint64_t fNumMsgs;
    std::string fInChannelName;

    virtual void Run();
    virtual void InitTask();
};

#endif /* FAIRMQSINK_H_ */
