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
 * YouTubeWebAPIApi.h
 *
 * 
 */

#ifndef IO_TIKHUB_CLIENT_API_YouTubeWebAPIApi_H_
#define IO_TIKHUB_CLIENT_API_YouTubeWebAPIApi_H_


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



class  YouTubeWebAPIApi 
{
public:

    explicit YouTubeWebAPIApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~YouTubeWebAPIApi();

    /// <summary>
    /// 获取频道ID/Get channel ID
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道ID。 ### 参数: - channel_name: 频道名称。 ### 返回: - 频道ID。  # [English] ### Purpose: - Get channel ID. ### Parameters: - channel_name: Channel name. ### Returns: - Channel ID.  # [示例/Example] channel_name &#x3D; \&quot;LinusTechTips\&quot;
    /// </remarks>
    /// <param name="channelName">频道名称/Channel name</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelIdApiV1YoutubeWebGetChannelIdGet(
        utility::string_t channelName
    ) const;
    /// <summary>
    /// 获取频道ID/Get channel ID
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道ID。 ### 参数: - channel_name: 频道名称。 ### 返回: - 频道ID。  # [English] ### Purpose: - Get channel ID. ### Parameters: - channel_name: Channel name. ### Returns: - Channel ID.  # [示例/Example] channel_name &#x3D; \&quot;LinusTechTips\&quot;
    /// </remarks>
    /// <param name="channelName">频道名称/Channel name</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelIdApiV1YoutubeWebGetChannelIdGet_0(
        utility::string_t channelName
    ) const;
    /// <summary>
    /// 获取频道信息/Get channel information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道信息。 ### 参数: - channel_id: 频道ID。 ### 返回: - 频道信息。  # [English] ### Purpose: - Get channel information. ### Parameters: - channel_id: Channel ID. ### Returns: - Channel information.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelInfoApiV1YoutubeWebGetChannelInfoGet(
        utility::string_t channelId
    ) const;
    /// <summary>
    /// 获取频道信息/Get channel information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道信息。 ### 参数: - channel_id: 频道ID。 ### 返回: - 频道信息。  # [English] ### Purpose: - Get channel information. ### Parameters: - channel_id: Channel ID. ### Returns: - Channel information.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelInfoApiV1YoutubeWebGetChannelInfoGet_0(
        utility::string_t channelId
    ) const;
    /// <summary>
    /// 获取频道短视频/Get channel short videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道短视频。 ### 参数: - channel_id: 频道ID。 - continuation_token: 用于继续获取频道短视频的令牌。默认为None。 ### 返回: - 频道短视频。  # [English] ### Purpose: - Get channel short videos. ### Parameters: - channel_id: Channel ID. - continuation_token: Token to continue fetching channel short videos. Default is None. ### Returns: - Channel short videos.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelShortVideosApiV1YoutubeWebGetChannelShortVideosGet(
        utility::string_t channelId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取频道短视频/Get channel short videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道短视频。 ### 参数: - channel_id: 频道ID。 - continuation_token: 用于继续获取频道短视频的令牌。默认为None。 ### 返回: - 频道短视频。  # [English] ### Purpose: - Get channel short videos. ### Parameters: - channel_id: Channel ID. - continuation_token: Token to continue fetching channel short videos. Default is None. ### Returns: - Channel short videos.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelShortVideosApiV1YoutubeWebGetChannelShortVideosGet_0(
        utility::string_t channelId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取频道视频/Get channel videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道视频。 ### 参数: - channel_id: 频道ID。 - continuation_token: 用于继续获取频道视频的令牌。默认为None。 ### 返回: - 频道视频。  # [English] ### Purpose: - Get channel videos. ### Parameters: - channel_id: Channel ID. - continuation_token: Token to continue fetching channel videos. Default is None. ### Returns: - Channel videos.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelVideosApiV1YoutubeWebGetChannelVideosGet(
        utility::string_t channelId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取频道视频/Get channel videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取频道视频。 ### 参数: - channel_id: 频道ID。 - continuation_token: 用于继续获取频道视频的令牌。默认为None。 ### 返回: - 频道视频。  # [English] ### Purpose: - Get channel videos. ### Parameters: - channel_id: Channel ID. - continuation_token: Token to continue fetching channel videos. Default is None. ### Returns: - Channel videos.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getChannelVideosApiV1YoutubeWebGetChannelVideosGet_0(
        utility::string_t channelId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取推荐视频/Get related videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 根据视频ID获取推荐视频数据。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的video_id就是LuIL5JATZsc。 - continuation_token: 用于继续获取推荐视频的令牌。默认为None。 ### 返回: - 推荐视频数据。  # [English] ### Purpose: - Get related videos by video ID. ### Parameters: - video_id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc. - continuation_token: Token to continue fetching related videos. Default is None. ### Returns: - Related videos.  # [示例/Example] video_id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getRelateVideoApiV1YoutubeWebGetRelateVideoGet(
        utility::string_t videoId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取推荐视频/Get related videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 根据视频ID获取推荐视频数据。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的video_id就是LuIL5JATZsc。 - continuation_token: 用于继续获取推荐视频的令牌。默认为None。 ### 返回: - 推荐视频数据。  # [English] ### Purpose: - Get related videos by video ID. ### Parameters: - video_id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc. - continuation_token: Token to continue fetching related videos. Default is None. ### Returns: - Related videos.  # [示例/Example] video_id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getRelateVideoApiV1YoutubeWebGetRelateVideoGet_0(
        utility::string_t videoId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取趋势视频/Get trending videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取趋势视频。 ### 参数: - language_code: 语言代码，默认为en。 - country_code: 国家代码，默认为us。 - section: 类型，默认为Now，可选值为Music, Gaming, Movies。 ### 返回: - 趋势视频。  # [English] ### Purpose: - Get trending videos. ### Parameters: - language_code: Language code, default is en. - country_code: Country code, default is us. - section: Section, default is Now, optional values are Music, Gaming, Movies. ### Returns: - Trending videos.  # [示例/Example]
    /// </remarks>
    /// <param name="languageCode">语言代码/Language code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="countryCode">国家代码/Country code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="section">类型/Section (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getTrendingVideosApiV1YoutubeWebGetTrendingVideosGet(
        boost::optional<utility::string_t> languageCode,
        boost::optional<utility::string_t> countryCode,
        boost::optional<utility::string_t> section
    ) const;
    /// <summary>
    /// 获取趋势视频/Get trending videos
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取趋势视频。 ### 参数: - language_code: 语言代码，默认为en。 - country_code: 国家代码，默认为us。 - section: 类型，默认为Now，可选值为Music, Gaming, Movies。 ### 返回: - 趋势视频。  # [English] ### Purpose: - Get trending videos. ### Parameters: - language_code: Language code, default is en. - country_code: Country code, default is us. - section: Section, default is Now, optional values are Music, Gaming, Movies. ### Returns: - Trending videos.  # [示例/Example]
    /// </remarks>
    /// <param name="languageCode">语言代码/Language code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="countryCode">国家代码/Country code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="section">类型/Section (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getTrendingVideosApiV1YoutubeWebGetTrendingVideosGet_0(
        boost::optional<utility::string_t> languageCode,
        boost::optional<utility::string_t> countryCode,
        boost::optional<utility::string_t> section
    ) const;
    /// <summary>
    /// 获取视频评论/Get video comments
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频的评论。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的id就是LuIL5JATZsc。 - continuation_token: 用于继续获取评论的令牌。默认为None。 ### 返回: - 视频评论。  # [English] ### Purpose: - Get comments of a single video. ### Parameters: - id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc. - continuation_token: Token to continue fetching comments. Default is None. ### Returns: - Video comments.  # [示例/Example] id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getVideoCommentsApiV1YoutubeWebGetVideoCommentsGet(
        utility::string_t videoId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取视频评论/Get video comments
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频的评论。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的id就是LuIL5JATZsc。 - continuation_token: 用于继续获取评论的令牌。默认为None。 ### 返回: - 视频评论。  # [English] ### Purpose: - Get comments of a single video. ### Parameters: - id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc. - continuation_token: Token to continue fetching comments. Default is None. ### Returns: - Video comments.  # [示例/Example] id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> getVideoCommentsApiV1YoutubeWebGetVideoCommentsGet_0(
        utility::string_t videoId,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 获取视频信息/Get video information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频的信息，包括视频下载链接、标题、作者、发布日期、观看次数、点赞次数、不喜欢次数、评论次数、时长、描述等。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的video_id就是LuIL5JATZsc。 ### 返回: - 视频信息。  # [English] ### Purpose: - Get information of a single video, including video download link, title, author, publish date, view count, like count, dislike count, comment count, duration, description, etc. ### Parameters: - video_id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc. ### Returns: - Video information.  # [示例/Example] video_id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> getVideoInfoApiV1YoutubeWebGetVideoInfoGet(
        utility::string_t videoId
    ) const;
    /// <summary>
    /// 获取视频信息/Get video information
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频的信息，包括视频下载链接、标题、作者、发布日期、观看次数、点赞次数、不喜欢次数、评论次数、时长、描述等。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的video_id就是LuIL5JATZsc。 ### 返回: - 视频信息。  # [English] ### Purpose: - Get information of a single video, including video download link, title, author, publish date, view count, like count, dislike count, comment count, duration, description, etc. ### Parameters: - video_id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc. ### Returns: - Video information.  # [示例/Example] video_id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> getVideoInfoApiV1YoutubeWebGetVideoInfoGet_0(
        utility::string_t videoId
    ) const;
    /// <summary>
    /// 获取视频字幕/Get video subtitles
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频的字幕。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的video_id就是LuIL5JATZsc。 ### 返回: - 视频字幕。  # [English] ### Purpose: - Get subtitles of a single video. ### Parameters: - video_id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc.  ### Returns: - Video subtitles.  # [示例/Example] video_id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> getVideoSubtitlesApiV1YoutubeWebGetVideoSubtitlesGet(
        utility::string_t videoId
    ) const;
    /// <summary>
    /// 获取视频字幕/Get video subtitles
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频的字幕。 ### 参数: - video_id: 视频ID，从URL中获取，例如：https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc，这里的video_id就是LuIL5JATZsc。 ### 返回: - 视频字幕。  # [English] ### Purpose: - Get subtitles of a single video. ### Parameters: - video_id: Video ID, get it from the URL, for example: https://www.youtube.com/watch?v&#x3D;LuIL5JATZsc, the id is LuIL5JATZsc.  ### Returns: - Video subtitles.  # [示例/Example] video_id &#x3D; \&quot;LuIL5JATZsc\&quot;
    /// </remarks>
    /// <param name="videoId">视频ID/Video ID</param>
    pplx::task<std::shared_ptr<ResponseModel>> getVideoSubtitlesApiV1YoutubeWebGetVideoSubtitlesGet_0(
        utility::string_t videoId
    ) const;
    /// <summary>
    /// 搜索频道/Search channel
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 搜索频道。 ### 参数: - search_query: 搜索关键字。 - language_code: 语言代码，默认为en。 - country_code: 国家代码，默认为us。 - continuation_token: 用于继续获取搜索结果的令牌。默认为None。 ### 返回: - 搜索结果。  # [English] ### Purpose: - Search channel. ### Parameters: - search_query: Search keyword. - language_code: Language code, default is en. - country_code: Country code, default is us. - continuation_token: Token to continue fetching search results. Default is None. ### Returns: - Search results.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot; search_query &#x3D; \&quot;AMD\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    /// <param name="searchQuery">搜索关键字/Search keyword</param>
    /// <param name="languageCode">语言代码/Language code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="countryCode">国家代码/Country code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> searchChannelApiV1YoutubeWebSearchChannelGet(
        utility::string_t channelId,
        utility::string_t searchQuery,
        boost::optional<utility::string_t> languageCode,
        boost::optional<utility::string_t> countryCode,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 搜索频道/Search channel
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 搜索频道。 ### 参数: - search_query: 搜索关键字。 - language_code: 语言代码，默认为en。 - country_code: 国家代码，默认为us。 - continuation_token: 用于继续获取搜索结果的令牌。默认为None。 ### 返回: - 搜索结果。  # [English] ### Purpose: - Search channel. ### Parameters: - search_query: Search keyword. - language_code: Language code, default is en. - country_code: Country code, default is us. - continuation_token: Token to continue fetching search results. Default is None. ### Returns: - Search results.  # [示例/Example] channel_id &#x3D; \&quot;UCXuqSBlHAE6Xw-yeJA0Tunw\&quot; search_query &#x3D; \&quot;AMD\&quot;
    /// </remarks>
    /// <param name="channelId">频道ID/Channel ID</param>
    /// <param name="searchQuery">搜索关键字/Search keyword</param>
    /// <param name="languageCode">语言代码/Language code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="countryCode">国家代码/Country code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> searchChannelApiV1YoutubeWebSearchChannelGet_0(
        utility::string_t channelId,
        utility::string_t searchQuery,
        boost::optional<utility::string_t> languageCode,
        boost::optional<utility::string_t> countryCode,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 搜索视频/Search video
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 搜索视频。 ### 参数: - search_query: 搜索关键字。 - language_code: 语言代码，默认为en。 - order_by: 排序方式，默��为this_month。 - country_code: 国家代码，默认为us。 - continuation_token: 用于继续获取搜索结果的令牌。默认为None。 ### 返回: - 搜索结果。  # [English] ### Purpose: - Search video. ### Parameters: - search_query: Search keyword. - language_code: Language code, default is en. - order_by: Order by, default is this_month. - country_code: Country code, default is us. - continuation_token: Token to continue fetching search results. Default is None. ### Returns: - Search results.  # [示例/Example] search_query &#x3D; \&quot;Minecraft\&quot;
    /// </remarks>
    /// <param name="searchQuery">搜索关键字/Search keyword</param>
    /// <param name="languageCode">语言代码/Language code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="orderBy">排序方式/Order by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="countryCode">国家代码/Country code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> searchVideoApiV1YoutubeWebSearchVideoGet(
        utility::string_t searchQuery,
        boost::optional<utility::string_t> languageCode,
        boost::optional<utility::string_t> orderBy,
        boost::optional<utility::string_t> countryCode,
        boost::optional<utility::string_t> continuationToken
    ) const;
    /// <summary>
    /// 搜索视频/Search video
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 搜索视频。 ### 参数: - search_query: 搜索关键字。 - language_code: 语言代码，默认为en。 - order_by: 排序方式，默��为this_month。 - country_code: 国家代码，默认为us。 - continuation_token: 用于继续获取搜索结果的令牌。默认为None。 ### 返回: - 搜索结果。  # [English] ### Purpose: - Search video. ### Parameters: - search_query: Search keyword. - language_code: Language code, default is en. - order_by: Order by, default is this_month. - country_code: Country code, default is us. - continuation_token: Token to continue fetching search results. Default is None. ### Returns: - Search results.  # [示例/Example] search_query &#x3D; \&quot;Minecraft\&quot;
    /// </remarks>
    /// <param name="searchQuery">搜索关键字/Search keyword</param>
    /// <param name="languageCode">语言代码/Language code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="orderBy">排序方式/Order by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="countryCode">国家代码/Country code (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="continuationToken">翻页令牌/Pagination token (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ResponseModel>> searchVideoApiV1YoutubeWebSearchVideoGet_0(
        utility::string_t searchQuery,
        boost::optional<utility::string_t> languageCode,
        boost::optional<utility::string_t> orderBy,
        boost::optional<utility::string_t> countryCode,
        boost::optional<utility::string_t> continuationToken
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_TIKHUB_CLIENT_API_YouTubeWebAPIApi_H_ */

