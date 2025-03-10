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
 * TwitterWebAPIApi.h
 *
 * 
 */

#ifndef IO_TIKHUB_CLIENT_API_TwitterWebAPIApi_H_
#define IO_TIKHUB_CLIENT_API_TwitterWebAPIApi_H_


#include "../ApiClient.h"

#include "HttpValidationError.h"
#include "ResponseModel.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace io {
namespace tikhub {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  TwitterWebAPIApi 
{
public:

    explicit TwitterWebAPIApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TwitterWebAPIApi();

    /// <summary>
    /// 获取最新的推文评论/Get the latest tweet comments
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取最新的推文评论 ### 参数: - tweet_id: 推文ID - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 推文评论  # [English] ### Purpose: - Get the latest tweet comments ### Parameters: - tweet_id: Tweet ID - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - Tweet comments  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchLatestPostCommentsApiV1TwitterWebFetchLatestPostCommentsGet(
        utility::string_t tweetId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取最新的推文评论/Get the latest tweet comments
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取最新的推文评论 ### 参数: - tweet_id: 推文ID - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 推文评论  # [English] ### Purpose: - Get the latest tweet comments ### Parameters: - tweet_id: Tweet ID - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - Tweet comments  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchLatestPostCommentsApiV1TwitterWebFetchLatestPostCommentsGet_0(
        utility::string_t tweetId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取评论/Get comments
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取推文下的评论 ### 参数: - tweet_id: 推文ID - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 评论  # [English] ### Purpose: - Get comments under the tweet ### Parameters: - tweet_id: Tweet ID - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - Comments  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchPostCommentsApiV1TwitterWebFetchPostCommentsGet(
        utility::string_t tweetId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取评论/Get comments
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取推文下的评论 ### 参数: - tweet_id: 推文ID - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 评论  # [English] ### Purpose: - Get comments under the tweet ### Parameters: - tweet_id: Tweet ID - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - Comments  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchPostCommentsApiV1TwitterWebFetchPostCommentsGet_0(
        utility::string_t tweetId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 转推用户列表/ReTweet User list
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取转推用户列表 ### 参数: - tweet_id: 推文ID，可以从推文链接中获取。例如：https://x.com/elonmusk/status/1808168603721650364 中的 1808168603721650364。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 转推用户列表  # [English] ### Purpose: - Get ReTweet User list ### Parameters: - tweet_id: Tweet ID, can be obtained from the tweet link. For example: 1808168603721650364 in https://x.com/elonmusk/status/1808168603721650364 - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - ReTweet User list  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchRetweetUserListApiV1TwitterWebFetchRetweetUserListGet(
        utility::string_t tweetId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 转推用户列表/ReTweet User list
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取转推用户列表 ### 参数: - tweet_id: 推文ID，可以从推文链接中获取。例如：https://x.com/elonmusk/status/1808168603721650364 中的 1808168603721650364。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 转推用户列表  # [English] ### Purpose: - Get ReTweet User list ### Parameters: - tweet_id: Tweet ID, can be obtained from the tweet link. For example: 1808168603721650364 in https://x.com/elonmusk/status/1808168603721650364 - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - ReTweet User list  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchRetweetUserListApiV1TwitterWebFetchRetweetUserListGet_0(
        utility::string_t tweetId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 搜索/Search
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 搜索 ### 参数: - keyword: 搜索关键字 - search_type: 搜索类型，默认为Top，其他可选值为Latest，Media，People, Lists - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 搜索结果  # [English] ### Purpose: - Search ### Parameters: - keyword: Search keyword - search_type: Search type, default is Top, other optional values are Latest, Media, People, Lists - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - Search results  # [示例/Example] keyword &#x3D; \&quot;Elon Musk\&quot; search_type &#x3D; \&quot;Top\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="keyword">搜索关键字/Search Keyword</param>
    /// <param name="searchType">搜索类型/Search Type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchSearchTimelineApiV1TwitterWebFetchSearchTimelineGet(
        utility::string_t keyword,
        boost::optional<utility::string_t> searchType,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 搜索/Search
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 搜索 ### 参数: - keyword: 搜索关键字 - search_type: 搜索类型，默认为Top，其他可选值为Latest，Media，People, Lists - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 搜索结果  # [English] ### Purpose: - Search ### Parameters: - keyword: Search keyword - search_type: Search type, default is Top, other optional values are Latest, Media, People, Lists - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - Search results  # [示例/Example] keyword &#x3D; \&quot;Elon Musk\&quot; search_type &#x3D; \&quot;Top\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="keyword">搜索关键字/Search Keyword</param>
    /// <param name="searchType">搜索类型/Search Type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchSearchTimelineApiV1TwitterWebFetchSearchTimelineGet_0(
        utility::string_t keyword,
        boost::optional<utility::string_t> searchType,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 趋势/Trending
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取趋势 ### 参数: - country: 国家，默认为UnitedStates，其他可选值见下方     - China     - India     - Japan     - Russia     - Germany     - Indonesia     - Brazil     - France     - UnitedKingdom     - Turkey     - Italy     - Mexico     - SouthKorea     - Canada     - Spain     - SaudiArabia     - Egypt     - Australia     - Poland     - Iran     - Pakistan     - Vietnam     - Nigeria     - Bangladesh     - Netherlands     - Argentina     - Philippines     - Malaysia     - Colombia     - UniteArabEmirates     - Romania     - Belgium     - Switzerland     - Singapore     - Sweden     - Norway     - Austria     - Kazakhstan     - Algeria     - Chile     - Czechia     - Peru     - Iraq     - Israel     - Ukraine     - Denmark     - Portugal     - Hungary     - Greece     - Finland     - NewZealand     - Belarus     - Slovakia     - Serbia     - Lithuania     - Luxembourg     - Estonia  ### 返回: - 趋势  # [English] ### Purpose: - Get Trending ### Parameters: - country: Country, default is UnitedStates, other optional values are as follows     - China     - India     - Japan     - Russia     - Germany     - Indonesia     - Brazil     - France     - UnitedKingdom     - Turkey     - Italy     - Mexico     - SouthKorea     - Canada     - Spain     - SaudiArabia     - Egypt     - Australia     - Poland     - Iran     - Pakistan     - Vietnam     - Nigeria     - Bangladesh     - Netherlands     - Argentina     - Philippines     - Malaysia     - Colombia     - UniteArabEmirates     - Romania     - Belgium     - Switzerland     - Singapore     - Sweden     - Norway     - Austria     - Kazakhstan     - Algeria     - Chile     - Czechia     - Peru  ### Return: - Trending  # [示例/Example] country &#x3D; \&quot;UnitedStates\&quot;
    /// </remarks>
    /// <param name="country">国家/Country (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchTrendingApiV1TwitterWebFetchTrendingGet(
        boost::optional<utility::string_t> country
    ) const;
    /// <summary>
    /// 趋势/Trending
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取趋势 ### 参数: - country: 国家，默认为UnitedStates，其他可选值见下方     - China     - India     - Japan     - Russia     - Germany     - Indonesia     - Brazil     - France     - UnitedKingdom     - Turkey     - Italy     - Mexico     - SouthKorea     - Canada     - Spain     - SaudiArabia     - Egypt     - Australia     - Poland     - Iran     - Pakistan     - Vietnam     - Nigeria     - Bangladesh     - Netherlands     - Argentina     - Philippines     - Malaysia     - Colombia     - UniteArabEmirates     - Romania     - Belgium     - Switzerland     - Singapore     - Sweden     - Norway     - Austria     - Kazakhstan     - Algeria     - Chile     - Czechia     - Peru     - Iraq     - Israel     - Ukraine     - Denmark     - Portugal     - Hungary     - Greece     - Finland     - NewZealand     - Belarus     - Slovakia     - Serbia     - Lithuania     - Luxembourg     - Estonia  ### 返回: - 趋势  # [English] ### Purpose: - Get Trending ### Parameters: - country: Country, default is UnitedStates, other optional values are as follows     - China     - India     - Japan     - Russia     - Germany     - Indonesia     - Brazil     - France     - UnitedKingdom     - Turkey     - Italy     - Mexico     - SouthKorea     - Canada     - Spain     - SaudiArabia     - Egypt     - Australia     - Poland     - Iran     - Pakistan     - Vietnam     - Nigeria     - Bangladesh     - Netherlands     - Argentina     - Philippines     - Malaysia     - Colombia     - UniteArabEmirates     - Romania     - Belgium     - Switzerland     - Singapore     - Sweden     - Norway     - Austria     - Kazakhstan     - Algeria     - Chile     - Czechia     - Peru  ### Return: - Trending  # [示例/Example] country &#x3D; \&quot;UnitedStates\&quot;
    /// </remarks>
    /// <param name="country">国家/Country (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchTrendingApiV1TwitterWebFetchTrendingGet_0(
        boost::optional<utility::string_t> country
    ) const;
    /// <summary>
    /// 获取单个推文数据/Get single tweet data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个推文数据 ### 参数: - tweet_id: 推文ID，可以从推文链接中获取。例如：https://x.com/elonmusk/status/1808168603721650364 中的 1808168603721650364。 ### 返回: - 推文数据  # [English] ### Purpose: - Get single tweet data ### Parameters: - tweet_id: Tweet ID, can be obtained from the tweet link. For example: 1808168603721650364 in https://x.com/elonmusk/status/1808168603721650364 ### Return: - Tweet data  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot;
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchTweetDetailApiV1TwitterWebFetchTweetDetailGet(
        utility::string_t tweetId
    ) const;
    /// <summary>
    /// 获取单个推文数据/Get single tweet data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个推文数据 ### 参数: - tweet_id: 推文ID，可以从推文链接中获取。例如：https://x.com/elonmusk/status/1808168603721650364 中的 1808168603721650364。 ### 返回: - 推文数据  # [English] ### Purpose: - Get single tweet data ### Parameters: - tweet_id: Tweet ID, can be obtained from the tweet link. For example: 1808168603721650364 in https://x.com/elonmusk/status/1808168603721650364 ### Return: - Tweet data  # [示例/Example] tweet_id &#x3D; \&quot;1808168603721650364\&quot;
    /// </remarks>
    /// <param name="tweetId">推文ID/Tweet ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchTweetDetailApiV1TwitterWebFetchTweetDetailGet_0(
        utility::string_t tweetId
    ) const;
    /// <summary>
    /// 用户粉丝/User Followers
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户粉丝 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 用户粉丝  # [English] ### Purpose: - Get User Followers ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - User Followers  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserFollowersApiV1TwitterWebFetchUserFollowersGet(
        utility::string_t screenName,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 用户粉丝/User Followers
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户粉丝 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 用户粉丝  # [English] ### Purpose: - Get User Followers ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - User Followers  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserFollowersApiV1TwitterWebFetchUserFollowersGet_0(
        utility::string_t screenName,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 用户关注/User Followings
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户关注 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 用户关注  # [English] ### Purpose: - Get User Followings ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - User Followings  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserFollowingsApiV1TwitterWebFetchUserFollowingsGet(
        utility::string_t screenName,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 用户关注/User Followings
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户关注 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 用户关注  # [English] ### Purpose: - Get User Followings ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - User Followings  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserFollowingsApiV1TwitterWebFetchUserFollowingsGet_0(
        utility::string_t screenName,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取用户高光推文/Get user highlights tweets
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户高光推文 ### 参数: - userId: 用户ID - count: 数量，默认为20 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取     - JSONPath: $.data.data.user.result.timeline_v2.timeline.instructions.[1].entries.[-1].content.value ### 返回: - 用户高光推文  # [English] ### Purpose: - Get user highlights tweets ### Parameters: - userId: User ID - count: Count, default is 20 - cursor: Cursor, default is None, used for paging, obtained from the last request     - JSONPath: $.data.data.user.result.timeline_v2.timeline.instructions.[1].entries.[-1].content.value ### Return: - User highlights tweets  # [示例/Example] userId &#x3D; \&quot;44196397\&quot; count &#x3D; 20 cursor &#x3D; None
    /// </remarks>
    /// <param name="userId">用户ID/User ID</param>
    /// <param name="count">数量/Count (optional, default to 0)</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserHighlightsTweetsApiV1TwitterWebFetchUserHighlightsTweetsGet(
        utility::string_t userId,
        boost::optional<int32_t> count,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取用户高光推文/Get user highlights tweets
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户高光推文 ### 参数: - userId: 用户ID - count: 数量，默认为20 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取     - JSONPath: $.data.data.user.result.timeline_v2.timeline.instructions.[1].entries.[-1].content.value ### 返回: - 用户高光推文  # [English] ### Purpose: - Get user highlights tweets ### Parameters: - userId: User ID - count: Count, default is 20 - cursor: Cursor, default is None, used for paging, obtained from the last request     - JSONPath: $.data.data.user.result.timeline_v2.timeline.instructions.[1].entries.[-1].content.value ### Return: - User highlights tweets  # [示例/Example] userId &#x3D; \&quot;44196397\&quot; count &#x3D; 20 cursor &#x3D; None
    /// </remarks>
    /// <param name="userId">用户ID/User ID</param>
    /// <param name="count">数量/Count (optional, default to 0)</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserHighlightsTweetsApiV1TwitterWebFetchUserHighlightsTweetsGet_0(
        utility::string_t userId,
        boost::optional<int32_t> count,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取用户媒体/Get user media
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户媒体 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - rest_id: 用户ID，例如：44196397，如果使用用户ID则会忽略用户名，两者只能选其一。 ### 返回: - 用户媒体  # [English] ### Purpose: - Get user media ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - rest_id: User ID, for example: 44196397, if the user ID is used, the username will be ignored, only one of them can be selected. ### Return: - User media  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="restId">用户ID/User ID (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserMediaApiV1TwitterWebFetchUserMediaGet(
        utility::string_t screenName,
        boost::optional<int32_t> restId
    ) const;
    /// <summary>
    /// 获取用户媒体/Get user media
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户媒体 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - rest_id: 用户ID，例如：44196397，如果使用用户ID则会忽略用户名，两者只能选其一。 ### 返回: - 用户媒体  # [English] ### Purpose: - Get user media ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - rest_id: User ID, for example: 44196397, if the user ID is used, the username will be ignored, only one of them can be selected. ### Return: - User media  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="restId">用户ID/User ID (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserMediaApiV1TwitterWebFetchUserMediaGet_0(
        utility::string_t screenName,
        boost::optional<int32_t> restId
    ) const;
    /// <summary>
    /// 获取用户发帖/Get user post
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户发帖 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - rest_id: 用户ID，例如：44196397，如果使用用户ID则会忽略用户名，两者只能选其一。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中的JSON中获取。 ### 返回: - 用户发帖  # [English] ### Purpose: - Get user post ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - rest_id: User ID, for example: 44196397, if the user ID is used, the username will be ignored, only one of them can be selected. - cursor: Cursor, default is None, used for paging, obtained from the JSON in the last request.  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot; rest_id &#x3D; 44196397 cursor &#x3D; None
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="restId">用户ID/User ID (optional, default to 0)</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserPostTweetApiV1TwitterWebFetchUserPostTweetGet(
        boost::optional<utility::string_t> screenName,
        boost::optional<int32_t> restId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取用户发帖/Get user post
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户发帖 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - rest_id: 用户ID，例如：44196397，如果使用用户ID则会忽略用户名，两者只能选其一。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中的JSON中获取。 ### 返回: - 用户发帖  # [English] ### Purpose: - Get user post ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - rest_id: User ID, for example: 44196397, if the user ID is used, the username will be ignored, only one of them can be selected. - cursor: Cursor, default is None, used for paging, obtained from the JSON in the last request.  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot; rest_id &#x3D; 44196397 cursor &#x3D; None
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="restId">用户ID/User ID (optional, default to 0)</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserPostTweetApiV1TwitterWebFetchUserPostTweetGet_0(
        boost::optional<utility::string_t> screenName,
        boost::optional<int32_t> restId,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取用户资料/Get user profile
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户资料 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - rest_id: 用户ID，例如：44196397，如果使用用户ID则会忽略用户名，两者只能选其一。 ### 返回: - 用户资料  # [English] ### Purpose: - Get user profile ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - rest_id: User ID, for example: 44196397, if the user ID is used, the username will be ignored, only one of them can be selected. ### Return: - User profile  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="restId">用户ID（如果使用用户ID则会忽略用户名）/User ID (If the user ID is used, the user name will be ignored) (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserProfileApiV1TwitterWebFetchUserProfileGet(
        boost::optional<utility::string_t> screenName,
        boost::optional<int32_t> restId
    ) const;
    /// <summary>
    /// 获取用户资料/Get user profile
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户资料 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - rest_id: 用户ID，例如：44196397，如果使用用户ID则会忽略用户名，两者只能选其一。 ### 返回: - 用户资料  # [English] ### Purpose: - Get user profile ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - rest_id: User ID, for example: 44196397, if the user ID is used, the username will be ignored, only one of them can be selected. ### Return: - User profile  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot;
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="restId">用户ID（如果使用用户ID则会忽略用户名）/User ID (If the user ID is used, the user name will be ignored) (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserProfileApiV1TwitterWebFetchUserProfileGet_0(
        boost::optional<utility::string_t> screenName,
        boost::optional<int32_t> restId
    ) const;
    /// <summary>
    /// 获取用户推文回复/Get user tweet replies
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户推文回复 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 用户推文回复  # [English] ### Purpose: - Get user tweet replies ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - User tweet replies  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserTweetRepliesApiV1TwitterWebFetchUserTweetRepliesGet(
        utility::string_t screenName,
        boost::optional<utility::string_t> cursor
    ) const;
    /// <summary>
    /// 获取用户推文回复/Get user tweet replies
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户推文回复 ### 参数: - screen_name: 用户名，例如：elonmusk，可以从用户主页链接中获取，例如：https://twitter.com/elonmusk 中的 elonmusk。 - cursor: 游标，默认为None，用于翻页，后续从上一次请求的返回结果中获取 ### 返回: - 用户推文回复  # [English] ### Purpose: - Get user tweet replies ### Parameters: - screen_name: Screen Name, for example: elonmusk, can be obtained from the user&#39;s homepage link, for example: elonmusk in https://twitter.com/elonmusk - cursor: Cursor, default is None, used for paging, obtained from the last request ### Return: - User tweet replies  # [示例/Example] screen_name &#x3D; \&quot;elonmusk\&quot; cursor &#x3D; None
    /// </remarks>
    /// <param name="screenName">用户名/Screen Name</param>
    /// <param name="cursor">游标/Cursor (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserTweetRepliesApiV1TwitterWebFetchUserTweetRepliesGet_0(
        utility::string_t screenName,
        boost::optional<utility::string_t> cursor
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_TIKHUB_CLIENT_API_TwitterWebAPIApi_H_ */

