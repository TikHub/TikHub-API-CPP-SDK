/**
 * TikHub.io - Your Ultimate Social Media Data & API Marketplace
 * High-performance asynchronous Douyin(抖音) TikTok Xiaohongshu(小红书) Kuaishou(快手) Weibo(微博) Instagram YouTube(油管) Twitter(X) Captcha Solver(验证码解决器) Temp Mail(临时邮箱) API(接口).
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MultipartFormData.h
 *
 * This class represents a container for building application/x-multipart-formdata requests.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MultipartFormData_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MultipartFormData_H_


#include "IHttpBody.h"
#include "HttpContent.h"

#include <vector>
#include <map>
#include <memory>

#include <cpprest/details/basic_types.h>


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  MultipartFormData
    : public IHttpBody
{
public:
    MultipartFormData();
    MultipartFormData(const utility::string_t& boundary);
    virtual ~MultipartFormData();

    virtual void add( std::shared_ptr<HttpContent> content );
    virtual utility::string_t getBoundary();
    virtual std::shared_ptr<HttpContent> getContent(const utility::string_t& name) const;
    virtual bool hasContent(const utility::string_t& name) const;
    virtual void writeTo( std::ostream& target );

protected:
    std::vector<std::shared_ptr<HttpContent>> m_Contents;
    utility::string_t m_Boundary;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> m_ContentLookup;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MultipartFormData_H_ */
