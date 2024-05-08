
#pragma once
#include "pch.h"
#include "DLLNOVOWrapper.h"
//#include "../DLLNOVO/model.cpp"
//#include "../DLLNOVO//model.h"

//#include "C:\Users\antun\source\repos\PSOptimization\DLLNOVO\model.h"

using namespace DLLNOVOWrapper;

//DLLNOVOWrapper::ModelWrapp::ModelWrapp() {
//    model = new modelModelClass();       
//   // modelModelClass::ExtU_model_T test2 = modelModelClass::ExtU_model_T();
//    
//}

DLLNOVOWrapper::ModelWrapp::ModelWrapp() : model(new modelModelClass()) {
}


    void DLLNOVOWrapper::ModelWrapp::initialize() {
        model->initialize();

    }

    void DLLNOVOWrapper::ModelWrapp::step() {
        model->step();
    }
    
    void DLLNOVOWrapper::ModelWrapp::terminate() {
        model->terminate();
    }

  /*  void DLLNOVOWrapper::ModelWrapp::setExternalInputs(extInputs^ inputs) {
        modelModelClass::ExtU_model_T* test = new modelModelClass::ExtU_model_T();
        test->PumpStatus = inputs->PumpStatus;
        test->Level = inputs->Level;
		test->Vrijeme = inputs->Vrijeme;
		test->watchdogRead = inputs->watchdogRead;
        test->Protok = inputs->Protok;
    
        model->setExternalInputs(test);
    }*/


    void DLLNOVOWrapper::ModelWrapp::setExternalInputs(extInputs^ inputs) {
        modelModelClass::ExtU_model_T test;
        test.PumpStatus = inputs->PumpStatus;
        test.Level = inputs->Level;
        test.Vrijeme = inputs->Vrijeme;
        test.watchdogRead = inputs->watchdogRead;
        test.Protok = inputs->Protok;

        model->setExternalInputs(&test);
    }


    void DLLNOVOWrapper::ModelWrapp::getExternalOutputs() {
        modelModelClass::ExtY_model_T outputs;
        outputs = model->getExternalOutputs();
        pumpStatus = outputs.pumpStatus;
        Out8 = outputs.Out8;
        nlpStatus = outputs.nlpStatus;
        //mvstatus = outputs.mv_fromMPC;
 
    }


