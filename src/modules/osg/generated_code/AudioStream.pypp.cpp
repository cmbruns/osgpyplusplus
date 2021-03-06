// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "AudioStream.pypp.hpp"

namespace bp = boost::python;

struct AudioStream_wrapper : osg::AudioStream, bp::wrapper< osg::AudioStream > {

    virtual int audioFrequency(  ) const {
        bp::override func_audioFrequency = this->get_override( "audioFrequency" );
        return func_audioFrequency(  );
    }

    virtual int audioNbChannels(  ) const {
        bp::override func_audioNbChannels = this->get_override( "audioNbChannels" );
        return func_audioNbChannels(  );
    }

    virtual ::osg::AudioStream::SampleFormat audioSampleFormat(  ) const {
        bp::override func_audioSampleFormat = this->get_override( "audioSampleFormat" );
        return func_audioSampleFormat(  );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::AudioStream::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::AudioStream::className( );
    }

    virtual void consumeAudioBuffer( void * const buffer, ::size_t const size ){
        bp::override func_consumeAudioBuffer = this->get_override( "consumeAudioBuffer" );
        func_consumeAudioBuffer( buffer, size );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::AudioStream::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::AudioStream::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::AudioStream::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::AudioStream::libraryName( );
    }

    virtual void setAudioSink( ::osg::AudioSink * audio_sink ){
        bp::override func_setAudioSink = this->get_override( "setAudioSink" );
        func_setAudioSink( boost::python::ptr(audio_sink) );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
    }

};

void register_AudioStream_class(){

    { //::osg::AudioStream
        typedef bp::class_< AudioStream_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::AudioStream >, boost::noncopyable > AudioStream_exposer_t;
        AudioStream_exposer_t AudioStream_exposer = AudioStream_exposer_t( "AudioStream", "\n Pure virtual AudioStream base class. Subclasses provide mechanism for reading/generating audio data\n", bp::no_init );
        bp::scope AudioStream_scope( AudioStream_exposer );
        bp::enum_< osg::AudioStream::SampleFormat>("SampleFormat")
            .value("SAMPLE_FORMAT_U8", osg::AudioStream::SAMPLE_FORMAT_U8)
            .value("SAMPLE_FORMAT_S16", osg::AudioStream::SAMPLE_FORMAT_S16)
            .value("SAMPLE_FORMAT_S24", osg::AudioStream::SAMPLE_FORMAT_S24)
            .value("SAMPLE_FORMAT_S32", osg::AudioStream::SAMPLE_FORMAT_S32)
            .value("SAMPLE_FORMAT_F32", osg::AudioStream::SAMPLE_FORMAT_F32)
            .export_values()
            ;
        { //::osg::AudioStream::audioFrequency
        
            typedef int ( ::osg::AudioStream::*audioFrequency_function_type )(  ) const;
            
            AudioStream_exposer.def( 
                "audioFrequency"
                , bp::pure_virtual( audioFrequency_function_type(&::osg::AudioStream::audioFrequency) ) );
        
        }
        { //::osg::AudioStream::audioNbChannels
        
            typedef int ( ::osg::AudioStream::*audioNbChannels_function_type )(  ) const;
            
            AudioStream_exposer.def( 
                "audioNbChannels"
                , bp::pure_virtual( audioNbChannels_function_type(&::osg::AudioStream::audioNbChannels) ) );
        
        }
        { //::osg::AudioStream::audioSampleFormat
        
            typedef ::osg::AudioStream::SampleFormat ( ::osg::AudioStream::*audioSampleFormat_function_type )(  ) const;
            
            AudioStream_exposer.def( 
                "audioSampleFormat"
                , bp::pure_virtual( audioSampleFormat_function_type(&::osg::AudioStream::audioSampleFormat) ) );
        
        }
        { //::osg::AudioStream::className
        
            typedef char const * ( ::osg::AudioStream::*className_function_type )(  ) const;
            typedef char const * ( AudioStream_wrapper::*default_className_function_type )(  ) const;
            
            AudioStream_exposer.def( 
                "className"
                , className_function_type(&::osg::AudioStream::className)
                , default_className_function_type(&AudioStream_wrapper::default_className) );
        
        }
        { //::osg::AudioStream::consumeAudioBuffer
        
            typedef void ( ::osg::AudioStream::*consumeAudioBuffer_function_type )( void * const,::size_t const ) ;
            
            AudioStream_exposer.def( 
                "consumeAudioBuffer"
                , bp::pure_virtual( consumeAudioBuffer_function_type(&::osg::AudioStream::consumeAudioBuffer) )
                , ( bp::arg("buffer"), bp::arg("size") ) );
        
        }
        { //::osg::AudioStream::isSameKindAs
        
            typedef bool ( ::osg::AudioStream::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( AudioStream_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            AudioStream_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::AudioStream::isSameKindAs)
                , default_isSameKindAs_function_type(&AudioStream_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::AudioStream::libraryName
        
            typedef char const * ( ::osg::AudioStream::*libraryName_function_type )(  ) const;
            typedef char const * ( AudioStream_wrapper::*default_libraryName_function_type )(  ) const;
            
            AudioStream_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::AudioStream::libraryName)
                , default_libraryName_function_type(&AudioStream_wrapper::default_libraryName) );
        
        }
        { //::osg::AudioStream::setAudioSink
        
            typedef void ( ::osg::AudioStream::*setAudioSink_function_type )( ::osg::AudioSink * ) ;
            
            AudioStream_exposer.def( 
                "setAudioSink"
                , bp::pure_virtual( setAudioSink_function_type(&::osg::AudioStream::setAudioSink) )
                , ( bp::arg("audio_sink") ) );
        
        }
        { //::osg::Object::clone
        
            typedef ::osg::Object * ( ::osg::Object::*clone_function_type )( ::osg::CopyOp const & ) const;
            
            AudioStream_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::osg::Object::clone) )
                , ( bp::arg("arg0") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "\n Clone an object, with Object* return type.\n            Must be defined by derived classes.\n" );
        
        }
        { //::osg::Object::cloneType
        
            typedef ::osg::Object * ( ::osg::Object::*cloneType_function_type )(  ) const;
            
            AudioStream_exposer.def( 
                "cloneType"
                , bp::pure_virtual( cloneType_function_type(&::osg::Object::cloneType) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "\n Clone the type of an object, with Object* return type.\n            Must be defined by derived classes.\n" );
        
        }
    }

}
