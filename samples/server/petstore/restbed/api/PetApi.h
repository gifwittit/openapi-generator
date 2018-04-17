/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 3.0.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * PetApi.h
 *
 * 
 */

#ifndef PetApi_H_
#define PetApi_H_


#include <memory>
#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>

#include "ApiResponse.h"
#include "Pet.h"
#include <string>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  PetApi: public restbed::Service
{
public:
	PetApi();
	~PetApi();
	void startService(int const& port);
	void stopService();
};


/// <summary>
/// Add a new pet to the store
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetApiPetResource: public restbed::Resource
{
public:
	PetApiPetResource();
    virtual ~PetApiPetResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void PUT_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Deletes a pet
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetApiPetPetIdResource: public restbed::Resource
{
public:
	PetApiPetPetIdResource();
    virtual ~PetApiPetPetIdResource();
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Finds Pets by status
/// </summary>
/// <remarks>
/// Multiple status values can be provided with comma separated strings
/// </remarks>
class  PetApiPetFindByStatusResource: public restbed::Resource
{
public:
	PetApiPetFindByStatusResource();
    virtual ~PetApiPetFindByStatusResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Finds Pets by tags
/// </summary>
/// <remarks>
/// Multiple tags can be provided with comma separated strings. Use tag1, tag2, tag3 for testing.
/// </remarks>
class  PetApiPetFindByTagsResource: public restbed::Resource
{
public:
	PetApiPetFindByTagsResource();
    virtual ~PetApiPetFindByTagsResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// uploads an image
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetApiPetPetIdUploadImageResource: public restbed::Resource
{
public:
	PetApiPetPetIdUploadImageResource();
    virtual ~PetApiPetPetIdUploadImageResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}

#endif /* PetApi_H_ */

