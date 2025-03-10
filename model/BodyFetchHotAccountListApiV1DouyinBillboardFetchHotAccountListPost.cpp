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



#include "BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost()
{
    m_Date_window = utility::conversions::to_string_t("");
    m_Date_windowIsSet = false;
    m_Page_num = utility::conversions::to_string_t("");
    m_Page_numIsSet = false;
    m_Page_size = utility::conversions::to_string_t("");
    m_Page_sizeIsSet = false;
    m_Query_tagIsSet = false;
}

BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::~BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost()
{
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::validate()
{
    // TODO: implement validation
}

web::json::value BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Date_windowIsSet)
    {
        val[utility::conversions::to_string_t("date_window")] = ModelBase::toJson(m_Date_window);
    }
    if(m_Page_numIsSet)
    {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(m_Page_num);
    }
    if(m_Page_sizeIsSet)
    {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(m_Page_size);
    }
    if(m_Query_tagIsSet)
    {
        val[utility::conversions::to_string_t("query_tag")] = ModelBase::toJson(m_Query_tag);
    }

    return val;
}

bool BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date_window")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_window"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_date_window;
            ok &= ModelBase::fromJson(fieldValue, refVal_date_window);
            setDateWindow(refVal_date_window);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_page_num;
            ok &= ModelBase::fromJson(fieldValue, refVal_page_num);
            setPageNum(refVal_page_num);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_page_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_page_size);
            setPageSize(refVal_page_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_tag")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_tag"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_query_tag;
            ok &= ModelBase::fromJson(fieldValue, refVal_query_tag);
            setQueryTag(refVal_query_tag);
        }
    }
    return ok;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Date_windowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date_window"), m_Date_window));
    }
    if(m_Page_numIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page_num"), m_Page_num));
    }
    if(m_Page_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page_size"), m_Page_size));
    }
    if(m_Query_tagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("query_tag"), m_Query_tag));
    }
}

bool BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("date_window")))
    {
        utility::string_t refVal_date_window;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("date_window")), refVal_date_window );
        setDateWindow(refVal_date_window);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("page_num")))
    {
        utility::string_t refVal_page_num;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("page_num")), refVal_page_num );
        setPageNum(refVal_page_num);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("page_size")))
    {
        utility::string_t refVal_page_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("page_size")), refVal_page_size );
        setPageSize(refVal_page_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("query_tag")))
    {
        std::shared_ptr<Object> refVal_query_tag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("query_tag")), refVal_query_tag );
        setQueryTag(refVal_query_tag);
    }
    return ok;
}

utility::string_t BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::getDateWindow() const
{
    return m_Date_window;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::setDateWindow(const utility::string_t& value)
{
    m_Date_window = value;
    m_Date_windowIsSet = true;
}

bool BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::dateWindowIsSet() const
{
    return m_Date_windowIsSet;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::unsetDate_window()
{
    m_Date_windowIsSet = false;
}
utility::string_t BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::getPageNum() const
{
    return m_Page_num;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::setPageNum(const utility::string_t& value)
{
    m_Page_num = value;
    m_Page_numIsSet = true;
}

bool BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::pageNumIsSet() const
{
    return m_Page_numIsSet;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::unsetPage_num()
{
    m_Page_numIsSet = false;
}
utility::string_t BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::getPageSize() const
{
    return m_Page_size;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::setPageSize(const utility::string_t& value)
{
    m_Page_size = value;
    m_Page_sizeIsSet = true;
}

bool BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::pageSizeIsSet() const
{
    return m_Page_sizeIsSet;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::unsetPage_size()
{
    m_Page_sizeIsSet = false;
}
std::shared_ptr<Object> BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::getQueryTag() const
{
    return m_Query_tag;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::setQueryTag(const std::shared_ptr<Object>& value)
{
    m_Query_tag = value;
    m_Query_tagIsSet = true;
}

bool BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::queryTagIsSet() const
{
    return m_Query_tagIsSet;
}

void BodyFetchHotAccountListApiV1DouyinBillboardFetchHotAccountListPost::unsetQuery_tag()
{
    m_Query_tagIsSet = false;
}
}
}
}
}


