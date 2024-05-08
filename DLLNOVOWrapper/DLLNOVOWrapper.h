#pragma once

// Including the model header file; ensure the path is correct.

#include "../DLLNOVO/model.h"
#include <vector>

//#include "../DLLNOVO/model.cpp"
using namespace System;
//using namespace DLLNOVOWrapper; 
namespace DLLNOVOWrapper {
    // Your header file

    public ref class extInputs {

    public:


        real_T Level;                      // '<Root>/Level'
        real_T Vrijeme;                    // '<Root>/Vrijeme'
        real_T Protok;                     // '<Root>/Protok'
        real_T PumpStatus;                 // '<Root>/PumpStatus'
        real_T watchdogRead;
    };


   public ref class ModelWrapp 
   {
    public:


        ModelWrapp();

        double pumpStatus;
        double nlpStatus;
        double Out8;
        double mvstatus;

        void initialize(); // Initialize the model.
        void step(); // Perform a single model step/update.
        void terminate(); // Clean up resources.
        void setExternalInputs(extInputs^ Inputs); // Set inputs to the model from external sources.
        void getExternalOutputs(); // Get outputs from the model to external consumers.

  
   private:
       modelModelClass *model;
    };



};
  

